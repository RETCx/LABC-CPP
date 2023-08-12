#include <stdio.h>
void roman2arabic(char input[],char output[])
{
    int arabic[15]= {'1','2','3','4','5','6','7','8','9'}, i = 0, num = 0; 
    for(i = 0 ; input[i] != '\0' ; i++ ){
        int j = 0;
        if((input[i]=='I')||(input[i]=='V')){
            char check[5] ;j = i ;num = 0 ;
            if(input[j] == 'V'){
                num += 5 ; j++; 
            }
            if(input[j] == 'I'){
                for(num; input[j] == 'I' ; num++ ,j++ ); j = j - 1;
                if(input[j + 1] == 'V'){
                    num += 3 ; j++; 
                }
            }
            if(input[j + 1] == 'X'){
                num += 8 ; j++;
            }
        }
        if(j == 0){
             output[i] = input[i];
        }
        else{
            output[i] = arabic[num - 1]; i = j ;
        }
    }
    output[i] = '\0';
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}