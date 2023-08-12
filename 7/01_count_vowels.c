#include <stdio.h>
int main(){
    char vowel[8] = {'a','e','i','o','u'} , str[100];
    int count = 0 ;
    printf("String (without a space): ");
    scanf("%s",str);
    for(int i = 0 ; str[i] != '\0' ; i++){
        for(int j = 0 ; vowel[j] != '\0' ; j++ ){
            if (str[i] == vowel[j]){
                count += 1 , printf("%c " , str[i]);
                break;
            } 
            else if((vowel[j] - 32) == str[i] ){
                count += 1 , printf("%c " , str[i]);  
                break;
            }
        }

    }
    if(count > 1){
        printf("\nThis string contains %d vowels." , count);
    }
    else{
        printf("\nThis string contains %d vowel." , count);
    }

}