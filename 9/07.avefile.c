#include <stdio.h>

double findAverage(char *filename)
{
    FILE *fl ;
    double sum = 0 , number = 0 ;
    int count = 0 ;
    fl = fopen(filename , "r");
    while(fscanf(fl , "%lf" , &number ) != EOF){
        sum += number ;
        count++ ;
    }
    return sum/count ;

}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}