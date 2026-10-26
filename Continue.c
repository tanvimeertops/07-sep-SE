#include<stdio.h>
/*
continue=skip
*/
int main(){
    // int student;
    // for(int i=1;i<=5;i++){
    //     if (i==3){
    //         continue;
    //     }
    //     printf("\n Student no %d present",i);
    // }
    int item;
    for(int i=1;i<=10;i++){
        if (i==6){
            continue;
        }
        printf("\n Order Processing for item no %d",i);
    }
    return 0;
}