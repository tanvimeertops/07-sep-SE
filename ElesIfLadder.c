#include<stdio.h>

int main(){
    int average=40;
    /*
    70 = distinction
    60 =first class
    50 =second class
    35= third class
    Fail
    */
    if(average>=70){
        printf("Distinction!!!");
    }else if(average>=60){
        printf("First class!!!");
    }else if(average>=50){
        printf("Second Class!!!");
    }else if(average >=35){
        printf("Third Class!!!");
    }else{
        printf("Fail");
    }

    /*
    <700000 = no tax
    >700000 =5% tax
    >1200000 =10% 
    */
    int income=1000000;
    if(income<=700000){
        printf("\nno tax");
    } else if(income>700000){
        printf("\n5 %% tax");   
    }else if(income >1200000){
        printf("\n10 %% tax");
    }
    return 0;
}