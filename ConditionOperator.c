#include<stdio.h>
int main(){
    int age=10;
    if ( age >=18)
        printf("\nEligible for voting!!!");
    else
        printf("\nNot Eligible for voting!!!");

    int no=-21;
    if (no > 0){
        printf("\npositive number");
    }else{
        printf("\nNegative number");
    }
    return 0;
}