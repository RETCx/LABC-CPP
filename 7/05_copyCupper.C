#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char *s) { /*return address ของ result*/
    int len = 0 , i = 0 ; 
    for(int len = 0 ;s[len] != '\0' ; len++);
    char *result = (char*)malloc((len + 1)*sizeof(char)) ;/*+1 ไว้เก็บ \0 ถ้า function จบ พื้นที่ malloc จองไว้ยังอยู่*/  
    while(s[i]){
        result[i] = toupper(s[i]);
        i++;
    }
    result[i] = '\0';
    return result ;

}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}