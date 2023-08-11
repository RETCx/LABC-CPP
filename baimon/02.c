#include <stdio.h>
// int main()
// {
//     char vowel = {'a'}
// }
// int remove_vowel(char *s)
// {
//     int i, j;
//     for(i = 0; s[i] != '\0'; i++){
//         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
//             for (j = i; s[j] != '\0'; j++){
//                 s[j] = s[j + 1];
//             }
//         }
//         if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
//             for (j = i; s[j] != '\0'; j++){
//                 s[j] = s[j + 1];
//             }
//         i -= 1;
//         }
//     }
// }
struct complex {
  
float a ; 
float b ;

};

struct complex
 add_complex(
struct complex C, struct complex D
)
{
struct complex E ;
E.a = (C.a + D.a) ; 
E.b = (C.b + D.b) ;
return E ;

}

struct complex
 multiply_complex(
struct complex C, struct complex D
)
{
struct complex F ;
F.a = (C.a * D.a) - (C.b * D.b) ;
F.b = (C.a * D.b) + (C.b * D.a) ;
return F ;

}
void print_complex(char *s , struct complex Z)
{
    if (!(Z.a) || !(Z.b)){
        if (!(Z.a) && Z.b){
            printf("%s%.1fi \n", s, Z.b);
        }
        else if (!(Z.b) && Z.a){
            printf("%s%.1f \n", s, Z.a);
        }
        else {
            printf("%s0.0 \n", s);
        }
    }
    else if(Z.b < 0){
        printf("%s%.1f - %.1fi \n" , s , Z.a , (-1)*Z.b);
    }
    else{
        printf("%s%.1f + %.1fi \n" , s , Z.a , Z.b);
    } 
}
int main()
{
  
struct complex C, D, E, F ;


  printf("Enter C: ");
  scanf("%f %f", &C.a, &C.b);
  
printf("Enter D: ");
scanf("%f %f", &D.a , &D.b);


  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}