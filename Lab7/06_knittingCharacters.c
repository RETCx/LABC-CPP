#include <stdio.h>

int charcount(char *s)
{
    int count = 0 ;
    for(int i = 0 ; s[i] != '\0' ; i++){
        count += 1 ;
    }
    return count ; 
}

void charweave(char *s,char *result)
{
    int countchar = charcount(s) - 1; /*- 1 เพราะ ต้อง - ที่เป็น null */   
    for(int i = 0 ,j = 0 ,k = 0 ; i <= countchar ; i++ ){
        if(!(i%2)){
            result[i] = s[j], j++ ;}
        else{
            result[i] = s[(countchar) - k] , k++; } 
    }
    
    for(int i = countchar + 1, j = 0  ; i <= 2*(countchar) + 1 ; i++ , j++){ /* +1 เพราะ จะได้เริ่มที่ index = 5*/
        result[i] = result[(countchar) - j ]; 
    }
    result[2*countchar + 2] = '\0' ; /*+2 เพราะแต่เดิม - 1 ต้อง + 2 เพื่อให้เลยไป1 แล้วใส่ \0  ได้*/
}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}