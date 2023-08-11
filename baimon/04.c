#include <stdio.h>

int charcount(char *s)
{
    int i = 0;
    for(i; s[i] != '\0'; i++);
    return i;
   

}
void charweave(char *s,char *result)
{
    int size = charcount(s) - 1; //  null character deleted
    int i =  0;
    for(i; i <= size; i++, result++){
        if(i % 2 == 0){
            *result = s[i/2];
        } else {
            *result = s[size - (i / 2)];
        }
    }
    for(i = i - 1; i >= 0; i--, result++){
        if(i % 2 == 0){
            *result = s[i/2];
        } else {
            *result = s[size - (i / 2)];
        }
    }
    *result = '\0';
}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #define static "use malloc"

// char *stoupper(const char *s) {
//     int i = 0;
//     char *str;
//     str = (char *)malloc(sizeof(char) * 100);
//     for(i; s[i] != '\0'; i++){
//         if(isalpha(s[i])){
//             str[i] = toupper(s[i]);
//         }
//         else{
//             str[i] = s[i];
//         }
//     }
//     str[i] = '\0';
//     return str;
// }

// int main(){
// 	char s[100];
// 	char* result;

// 	scanf("%s",s);
// 	result = stoupper(s);
//     if (result == s) printf("ERROR.\n");
// 	printf("%s\n",result);
// }