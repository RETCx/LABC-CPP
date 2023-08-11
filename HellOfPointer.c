#include <stdio.h>
#include <stdlib.h>

void pointerE(int ******a) {
    int *x = (int *)malloc(sizeof(int));
    *x = 30;
    ******a = *x;
}

void pointerD(int *****a) {
    pointerE(&a);
}

void pointerC(int ****a) {
    pointerD(&a);
}

void pointerB(int ***a) {
    pointerC(&a);
}

void pointerA(int **a) {
    pointerB(&a);
}


int main() {
    int a = 50;
    int *test = &a;
    pointerA(&test);
    printf("%d", *test);
}