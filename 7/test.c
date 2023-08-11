#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define static "use malloc"

// char *stoupper(const char *s) {
//     size_t len = strlen(s);
//     char *result = (char *) malloc((len + 1) * sizeof(char));
//     for (int i = 0; i < len; i++) {
//         result[i] = toupper(s[i]);
//     }
//     result[len] = '\0';
//     return result;
// }

int main(){
//      int a=5, b=2;

// printf(" %d",a++%b) ;       /* Ans1 = 1 ทำ 5%2 ก่อน แล้ว >> แล้ว ++*/ 
// printf(" %d",a|b + 3)   ;   /* Ans2 = 0101|0101 */
// printf(" %d",(b<<1)*a) ;       /* Ans3 = 4 */
// printf(" %d",a+(7&b))  ;       /* Ans4 =  */
// printf(" %d",--a*b%3<<2) ;  /* Ans5 = 4 */
// printf(" %d",(a+5*b>>1)<<2) ;    /* Ans6 = 5*b = 10 , 15>>1 1111>>1=0111, 0111<<2 =   */



// int a=4, b=3, c = 1, d = 1, e;
// float f=2,g=5, h = 1.33, i = 2.33, j = 0.75, k;
// printf("%d\n",c = f/b*f);
// printf("%.2f\n", h = a++/(float)b); /*++ ถ้าอยู่หลังจะ+ในรอบถัดไป แต่ถ้าไม่มีรอบถัดไปก็เหมือนใส่มาไม่ได้ใช้งาน*/
// printf("%.2f\n", j = (float)c/h--);
// printf("%.2f\n" , b*h/c);
// printf("%2f\n" , d*f+h--);
// printf("%d\n" , a*d++/i);
// printf("%d" , (int)i*d/(float)a);

// int i, j=12;
// int *pi, *pj=&j;
// *pj = j+3;
// printf("%d" ,pj);
// i = *pj+7;
// pi = pj;
// *pi = i+j;

// int a[10] = {0, 1}, *ptr;
// int  k;
// ptr  =  a+2;
// for(k=2; k<10; k++){
//     a[k] = a[k-1]+a[k-2];
//     printf(ptr),ptr++;
// }
/*ptr[0] = 1 ptr[1] = 2*/
// ptr[3];
// printf("%p\n" , &a[3]);
// printf("%p" , &a[4]);
// printf("%d",ptr[3]); /*เริ่ม ที่ a + 2 ก็คือ a[2] + เพิ่มไป 3*/

// char s[100];
// char* result;

// scanf("%s",s);
// result = stoupper(s);
// if (result == s) printf("ERROR.\n");
// printf("%s\n",result);


float **ptr;
int i,m,n;
ptr=(float**)malloc(m*sizeof(float*));
for(i=0;i<m;i++)
    ptr[i]=(float*)malloc(n*sizeof(float));
/* Do something with ptr */

/*......Ans1......*/
/*......Ans2......*/
/*......Ans3......*/
for(i=0;i<m;i++)
    free(ptr[i]);
free(ptr);/*The reason we still have to call free(ptr)
 even after freeing the memory for each row of the 2D array is because 
 ptr itself is also a dynamically allocated memory block. ptr was allocated memory using malloc as follows:*/
// ptr = (float**)malloc(m*sizeof(float*));
/*Here, we first use a loop to free the memory for each m row of the 2D array, 
and then we free the memory for the ptr pointer which points to the entire 2D array.
 This way, all the memory allocated using malloc is properly freed, avoiding memory leaks.*/
}


