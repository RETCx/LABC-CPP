#include <stdio.h>
#include <math.h>

struct Point  {
    double x ;
    double y ;
};
int main(){
    int number_p ;
    printf("Number of Points: ");
    scanf("%d" ,&number_p);
    struct Point Points[number_p] ;
    for(int i = 0 ; i < number_p ; i++){
        printf("P%d.X: " , i+1);
        scanf("%lf" , &Points[i].x);
        printf("P%d.Y: " , i+1);
        scanf("%lf" , &Points[i].y);
        //printf("x = %d , y = %d" ,Points[i].x,Points[i].y );
    }   
    printf("Length:\n");
    for(int i = 0 ; i < number_p - 1 ; i++){
        //printf("x = %d , y = %d" ,Points[i].x,Points[i].y );
        double dX = Points[i+1].x - Points[i].x;
        double dY = Points[i+1].y - Points[i].y;
        double lenght = sqrt((dX*dX) + (dY*dY));
        printf("Length from P%d(%.2lf, %.2lf) " ,i+1,Points[i].x,Points[i].y);
        printf("to P%d(%.2lf, %.2lf) " ,i+2,Points[i+1].x,Points[i+1].y);
        printf("is %.2lf\n" ,lenght);
        
    }

}