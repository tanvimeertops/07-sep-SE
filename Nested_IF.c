#include<stdio.h>
int main(){
    int a=10,b=20,c=100;
    //Max number
    if(a>b){
        if(a>c){
            printf("A is greater");
        }else{
            printf("C is greater");
        }
        
    }else{
        if(b>c){
            printf("B is greater");
        }else{
            printf("C is greater");
        }
    }

    //give entry if age is greater than 18 and id is 1
    int age=20;
    int i=1;

    if(age>18){
        if(i==1){
            printf("\nEntry Accepted");
        }
    }
//if number is positive and even
int number=8;
if(number>0){
    if(number%2==0){
        printf("\nEven and positive");
    }
}
    return 0;
}