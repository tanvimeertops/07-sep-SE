#include<stdio.h>

int main(){
    int n=123,digit; 
    while (n>0){ //n=0
        digit=n%10; // 1
        printf("%d",digit);//1
        n=n/10; //0


    }

    return 0;
}