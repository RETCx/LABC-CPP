// #include <stdio.h>

// int main()
// {
//     int i, a[5], b[5], c[10];
//     printf("Enter array a:\n");
//     for (i = 0; i < 5; i++){
//         printf("Please enter an integer: ");
//         scanf ("%d",&a[i]);
//     }
//     printf("Enter array b:\n");
//     for (i = 0; i < 5; i++){
//         printf("Please enter an integer: ");
//         scanf ("%d",&b[i]);
//     }
//     for (i = 0; i < 5; i++){
//         c[i] = a[i];
//     }
//     for (i = 0; i < 5; i++){
//         c[i + 5] = b[i];
//     }
//     printf ("Array c: ");
//     for (i=0;i<10;i++){
//     printf ("%d ",c[i]);
//     }
//   printf ("\n");
//   return 0;
// }

// #include <stdio.h>
// int main() {
//  int n, i, j;
//  printf("Enter the number of rows or columns: ");
//  scanf("%d",&n);
//  int a[n][n];
//  for (i = 0; i < n; i++){
//     for( j = 0; j < n; j++){
//         a[i][j] = i + j + 1;
//     }
//  }


//   for(i = 0; i < n; i++) {
//     for(j = 0; j < n; j++)
//        printf("%2d ", a[i][j]);
//     printf("\n");
//  }
//  return 0;
// }
#include <stdio.h>
#include <stdlib.h>
int main() 
{
   int n, n2;
   printf("Input n = ");
   scanf("%d", &n);
   n2 = n * n;
   if (array(n))

}