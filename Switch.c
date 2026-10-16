#include<stdio.h>
/*
switch : select from multiple options
1. Deposit
2. Withdraw
3. Balance Check
4. Exit
*/
int main(){
    int choice=6;
    switch(choice){
        case 1:
            printf("deposit");
            break;
        case 2:
            printf("withdraw");
            break;
        case 3:
            printf("Balance check");
            break;
        default:
            printf("Invalid Choice");
    }

/*
    1.burger
    2.pizza
    3.taco
    4.wrong option
*/
int menu=2;
switch(menu){
    case 1:
        printf("\nburger");
        break;
    case 2:
        printf("\npizza");
        break;
    case 3:
        printf("\ntaco");
        break;
    default:
        printf("\nIncorrect choice");




}
    return 0;
}