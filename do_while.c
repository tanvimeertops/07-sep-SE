#include<stdio.h>
/*
1.withdraw
2.deposit
3.exit
*/
int main(){
    int choice;
        
    do{
        printf("\n 1.withdraw");
        printf("\n 2.deposit");
        printf("\n 3.exit");
        printf("\nEnter option between 1 to 3 :");
        scanf("%d",&choice);
    }while(choice!=3);

    printf("\nThankyou for banking with us");
    return 0;
}