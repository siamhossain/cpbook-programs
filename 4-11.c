#include<stdio.h>
int main(){
    int a, b, c, count=0;
    for ( a = 1; a <= 3; a++ ){
        for ( b = 1; b <= 3; b++ ){
            for ( c = 1; c <= 3; c++){
                count++;
                printf("%d, %d, %d = %d\n",a,b,c,count);

            }
        }
    }
return 0;

}
