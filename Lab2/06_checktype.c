#include <stdio.h>
#include <stdlib.h>
int main(){
  //The getchar() function It returns the character that was read in the form of an integer or EOF if an error occurs.
  //The fgets() function returns a pointer to the string buffer if successful
    char ch = getchar(); 
    if (ch >= 97 && ch <= 122) 
     {printf("Output: lower case");}
    else if (ch >= 65 && ch <= 90)
     {printf("Output: upper case");}
    else if (ch >= 48 && ch <= 57 )
     {printf("Output: digit");}
    else 
     {printf("Output: others");}


    return 0 ;
}