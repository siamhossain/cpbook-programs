#include<stdio.h>
int main(){
    int n, sum;
    printf("Enter the last range of series ");
    scanf("%d",&n);
    sum = ( n * ( n+1 )) / 2;
    printf("The sum is : %d", sum);
    return 0;


}
