#include <stdio.h>

struct complex {
    float a,b,c,d;
};

struct complex add_complex(struct complex C,struct complex D)/*Struct ก็เหมือน int float double char แต่แค่เรากำหนดว่าในนั้น มีอะไรบัาง เลยเอามาให้ function return ค่าได้*/
{
  struct complex E ;
  E.a = (C.a + D.c) ;
  E.b = (C.b + D.d) ;
  return E ;
}
struct complex multiply_complex(struct complex C,struct complex D)
{
  struct complex F ;
  F.a = ((C.a*D.c) - (C.b*D.d)) ;
  F.b = ((C.a*D.d) + (C.b*D.c)) ;
  return F ; 
}

void print_complex(char *str , struct complex Z)
{
  if((Z.a == 0) || (Z.b == 0)){
    if (Z.a == 0 && Z.b != 0) printf("%s%.1fi \n" , str , Z.b); 
    else if (Z.b == 0 && Z.a) printf("%s%.1f \n" , str , Z.a);
    else printf("%s0.0 \n" , str );
  }
  else if(Z.b < 0){
    printf("%s%.1f - %.1fi \n" , str , Z.a , ((-1)*Z.b));
    }
  else printf("%s%.1f + %.1fi \n" , str , Z.a , Z.b);
}

int main()
{
  struct complex C , D , E , F ;


  printf("Enter C: ");
  scanf("%f %f", &C.a , &C.b);
  printf("Enter D: ");
  scanf("%f %f", &D.c , &D.d);


  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}