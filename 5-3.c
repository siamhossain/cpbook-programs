#include<stdio.h>
int main(){
    double a1, b1, c1, x, y, d, a2, b2, c2;

    printf("a1 = ");
    scanf("%lf", &a1);

    printf("b1 = ");
    scanf("%lf", &b1);

    printf("c1 = ");
    scanf("%lf", &c1);

    printf("a2 = ");
    scanf("%lf", &a2);

    printf("b2 = ");
    scanf("%lf", &b2);

    printf("c2 = ");
    scanf("%lf", &c2);

    d = a1*b2 - a2*b1;

    if ( (int) d == 0 ){
        printf("The numbers are not determined");
    }
    else{
    x = ( b2*c1 - b1*c2 ) / d;
    y = ( a1*c2 - a2*c1 ) / d;
    }

    printf("Resul is X = %0.2lf\nY=%0.2lf",x, y);
    return 0;


}

