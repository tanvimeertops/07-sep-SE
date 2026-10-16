#include<stdio.h>
// condition is true loop runs
int main(){
    int password;
    while(password!=12345){
        printf("enter your password :");
        scanf("%d",&password);
    }
    printf("\nAccess granted!!!");
    

    return 0;
}