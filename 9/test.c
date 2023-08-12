#include <stdio.h>
#include <string.h>

#define MAX_STOCK 100

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void updateStock(Product stock[], int *nStock, char name[], int amount, double cost)
{
    int i;
    for (i = 0; i < *nStock; i++) {
        if (strcmp(stock[i].name, name) == 0) {
            stock[i].amount += amount;
            stock[i].totalCost += cost;
            return;
        }
    }
    // Not found, add new product to stock
    if (*nStock < MAX_STOCK) {
        strncpy(stock[*nStock].name, name, sizeof(stock[*nStock].name));
        stock[*nStock].amount = amount;
        stock[*nStock].totalCost = cost;
        (*nStock)++;
    }
}

void reportStock(char *filename)
{
    FILE *fp;
    char line[100], name[30], date[20], time[20];
    int amount;
    double price, cost;
    Product stock[MAX_STOCK] = {0};
    int nStock = 0 ,i = 0 , countcom = 0 ;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Failed to open file: %s\n", filename);
        return;
    }
    while (fgets(line, sizeof(line), fp) != NULL) {
        if(i > 0){
            //sscanf(line, "%[^,],%[^,],%[^,],%d,%lf", date, time, name, &amount, &price);
            for(int j = 0 ; line[j] != '\n' ;j++){
                if(line[j] == ','){
                    countcom++ ;
                    for(int k = 0 ; k < j ; k++){
                        if(line[j+1+k] == ',') {
                            j+= k ; break;
                        }
                        if(countcom == 2){
                            name[k] = line[j+1+k];
                        }
                        else if(countcom == 3){
                            amount = line[j+1+k] ; break;
                        }
                        else if(countcom == 4){
                            price = line[j+1+k] ; break; 
                        }
                        else{
                            break;
                        }
                    }
                }
                else if(countcom > 4){
                    break;
                }
            }
            i++ ;
            cost = amount * price;
            updateStock(stock, &nStock, name, amount, cost);
        }i++;
    }
    fclose(fp);
    printStock(stock, nStock);
}

int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
    return 0;
}