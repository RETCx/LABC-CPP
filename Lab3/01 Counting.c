#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char str[100] ;
    fgets(str,100,stdin);
    int i ;
    i = atoi(str);
    for (i ; i >= 0 ;  i = i - 1  )
    {
        printf("%d\n",i);
    }
}