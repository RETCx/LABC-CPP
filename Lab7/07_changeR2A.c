#include <stdio.h>
void roman2arabic(char input[],char output[])
{ 
    while(*input){
        if((*input == 'I')&&(*(input+1) == 'I')&&(*(input+2) == 'I')){
            *output = '3' ; input += 3; 
        }
        else if((*input == 'I')&&(*(input+1) == 'I')){
            *output = '2' ; input += 2 ; 
        }
        else if((*input == 'I')&&(*(input+1)== 'V')){
            *output = '4' ; input += 2 ; 
        }
        else if((*input == 'I')&&(*(input+1)== 'X')){
            *output = '9' ; input += 2 ; 
        }
        else if(*input == 'I'){
            *output = '1' ; input += 1 ; 
        }
        else if((*input == 'V')&&(*(input+1) == 'I')&&(*(input+2) == 'I')&&(*(input+3) == 'I')){
            *output = '8' ; input += 4; 
        }
        else if((*input == 'V')&&(*(input+1) == 'I')&&(*(input+2) == 'I')){
            *output = '7' ; input += 3; 
        }
        else if((*input == 'V')&&(*(input+1) == 'I')){
            *output = '6' ; input += 2; 
        }
        else if((*input == 'V')){
            *output = '5' ; input += 1; 
        }
        else{
            *output = *input ; input += 1; 
        }
        output++;
    }
    *output = '\0';

}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}