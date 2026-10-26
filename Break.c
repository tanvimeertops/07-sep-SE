#include<stdio.h>

int main(){
    // int choice;
    // while(1)
    // {
    //     printf("\n 1.withdraw");
    //     printf("\n 2.deposit");
    //     printf("\n 3.exit");
    //     printf("\nEnter option between 1 to 3 :");
    //     scanf("%d",&choice);
    //     if(choice==3){
    //         break;
    //     }
    // }
    int pin;
    for(int i=1;i<=3;i++){
        printf("Enter pin :");
        scanf("%d",&pin);
        if(pin==1234){
            printf("Login Successfull!!!");
            break;
        }

    }
    return 0;
}