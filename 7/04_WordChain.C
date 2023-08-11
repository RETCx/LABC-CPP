#include <stdio.h>
#include <string.h>
int main(){
    int l = 0 , n = 0 , flag = 1 ; char s[1000] , sc[1000] , output[1000]  ;
    scanf("%d" , &l);
    scanf("%d" , &n);
    scanf("%s" , s); strcpy(output,s);
    for(int i = 0 , checkf = 0  ; i < n - 1 ; i++){
        checkf = 0 ;
        scanf("%s" ,sc);
        for(int j = 0  ; j < l ; j++){
            if(s[j] != sc[j]){
                checkf += 1 ;
            }
        }
        if(checkf <= 2 && flag ){
            strcpy(s,sc); strcpy(output,sc);
        }
        else{
            flag = 0 ;
        }
    }
    printf("%s" , output);
}