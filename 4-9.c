#include<stdio.h>
int main(){
    int n = 5;
    int i,mul=0;
    for ( i = 1; i<=10; i++){
        mul = mul + 5;
        printf("%d x %d = %d\n",n,i,mul);
    }
    return 0;
}
