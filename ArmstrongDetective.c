#include<stdio.h>
/*
Armstrong  : 153 1
3^3 =27
5^3 =125
1^3 =1

153

371
*/
int main(){

    int n,original,digit,sum=0;
    printf("enter a number :");
    scanf("%d",&n); //153

    original=n; //153
    while(n>0){ 
       digit= n%10; //1
      sum=sum+ digit*digit*digit; //153
      n=n/10;//0
    }
    if (original==sum){
        printf("Armstrong number");
    }else{
        printf("Not an Armstrong Number");
    }
    return 0;
}