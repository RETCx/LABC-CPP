#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30] ;
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
void reportStock(char *filename ){
    Product stock[100] ;
    char line[100] , name[30] ,amount[20] = {0} ,price[20] ;
    FILE *file ;
    int i = 0 ,j = 0 ,countcom = 0 , nstock = 0 , check = 0 , str = 0;
    double cost = 0 ,amountn = 0 , pricen ;
    file = fopen(filename , "r");
    while (fgets(line, sizeof(line), file) != NULL) {
        memset(name, 0, 30*sizeof(char)); //re all array in name to 0
        if(i > 0){
            countcom = 0 ;
            //sscanf(line, "%[^,],%[^,],%[^,],%d,%lf", date, time, name, &amount, &price);
            for(int j = 0 ; line[j] != '\n' ;j++){
                if(line[j] == ','){
                    countcom++ ;
                    for(int k = 0 ; k < j  ; k++){
                        if((line[j+1+k] == ',')||(line[j+1+k] == '\n')) {
                            j+= k ; break;
                        }
                        if(countcom == 2){
                            name[k] = line[j+1+k];
                        }
                        else if(countcom == 3){
                            amount[k] = line[j+1+k] ; 
                        }
                        else if(countcom == 4){
                            price[k]= line[j+1+k] ; 
                        }
                        else{
                            break;
                        }
                    }
                }
                
            }
        }
        if(countcom == 4){
            sscanf(amount,"%lf",&amountn);
            sscanf(price,"%lf",&pricen);
        }
            if(i > 0){
                int find = 0 ; 
                for(check = 0 ; check < i  ; check++){
                    if(strcmp(stock[check].name,name) == 0){
                        stock[check].amount += amountn  ; stock[check].totalCost += pricen ; 
                        find = 1 ; 
                        break;  
                    }
                    }
                if(!(find)){
                    strcpy(stock[nstock].name,name); stock[nstock].amount = amountn ;
                    stock[nstock].totalCost = pricen ;
                    nstock++ ;
                }
            }   

    i++; 
    
    }
    fclose(file);
    printStock(stock , nstock);
    

}



int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}