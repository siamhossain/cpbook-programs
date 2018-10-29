#include<stdio.h>
int main(){
    int n,reminder, R, div;
    printf("Enter a number to check even or odd\n");
    scanf("%d", &n);
    div = n /2;
    R = div*2; //
    reminder = n - R;
    if(reminder == 0){
        printf("The number is Even");
    }
    else{
        printf("The number is odd");
    }
    return 0;

}
