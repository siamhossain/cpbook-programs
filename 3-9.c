#include<stdio.h>
int main(){
    char ch;
    ch = getchar();

    if( ch >= 'a' && ch <= 'z' ){
    printf("%c is a lower case letter",ch);
    }
    if( ch >= 'A' && ch <= 'Z' ){
    printf("%c is a upper case letter",ch);
    }
return 0;

}
