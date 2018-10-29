#include<stdio.h>
int main(){
    double num1, num2, sum, mul, div;

    printf("Enter two numbers : \n");
    scanf("%lf %lf",&num1, &num2);

    char sign = '+';

    sum = num1+num2;
    printf("%lf %c %lf = %lf\n",num1, sign, num2, sum);

    sign = '*';

    mul = num1*num2;
    printf("%lf %c %lf = %lf\n",num1, sign, num2, mul);

    sign = '/';

    div = num1/num2;
    printf("%lf %c %lf = %lf\n",num1, sign, num2, div);

}
