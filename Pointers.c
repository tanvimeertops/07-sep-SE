#include<stdio.h>
/*
pointer : points to the address of variable
*/
int main(){
    int a=25;
    int *ptr=&a;
    printf("\na is %d",a);
    printf("\naaddress of a is %p",&a);
    printf("\naaddress of a is %d",*ptr);


    return 0;
}