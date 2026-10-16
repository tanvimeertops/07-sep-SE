#include<stdio.h>
int main(){
    /*
    0   1   1   2   3   5   8   13  21
    a + b   c
        a   b
    */

    int a=0,b=1,c;
    for( int i=1; i<=10;i<i++){
        printf("%d ",a);
        c= a+b;
        a= b;
        b= c;
    }
    return 0;
}