#include <stdio.h>

int main(){
    char filename[80], c ;
    FILE *fin ;
    int sum = 0 ;


    printf("Enter a filename ") ;
    fflush(stdout);
    scanf("%s" , filename);

    fin = fopen(filename , "r");
    if(fin == NULL){
        fprintf(stderr , "File %s not found!\n" ,filename);
        return 1 ;
    }

    while((c=fgetc(fin)) != EOF){
        sum += c ;
        putchar(c);
    }
    printf("%d" ,sum);
    fclose(fin);
    return 0 ; 
}