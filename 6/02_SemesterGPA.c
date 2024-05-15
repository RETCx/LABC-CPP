#include <stdio.h>
int main(){
    int grade , subject = 0 , d = 0 ;
    char weight ;
    float GPA = 0  ;
    printf("Enter number of subject(s): ");
    scanf("%d",&subject);
    for(int i = 1 ; i <= subject; i++){
        printf("Enter credit,grade for subject #%d: ",i);
        scanf("%d,%c",&grade,&weight );

        if((weight == 'a')||( weight == 'A')){
            GPA += (grade * 4) , d += grade ;  
        }
        else if(weight == 'b'|| weight == 'B'){
            GPA += (grade * 3) ,d += grade;
            
        }
        else if(weight == 'c'|| weight == 'C'){
            GPA += (grade * 2) ,d += grade;
            
        }
        else if(weight == 'd'|| weight == 'D'){
            GPA +=(grade * 1) , d += grade ;
            
        }
        else{
            GPA += (grade * 0) , d += grade ;
            
        }
        
    }
    
    printf("GPA = %.2f", GPA/d);


}