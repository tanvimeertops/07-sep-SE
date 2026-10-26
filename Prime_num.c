#include<stdio.h>
/*
 Prime number : divisible by 1 and itself
 5 1  5
 3 1  3
 no=5
  2 to no-1 
  no/i // 5%2== 
*/
int main(){
    int no,flag=1;
    printf("Enter a number :");
    scanf("%d",&no);//5
    for (int i=2;i<no;i++){ // 2 to 4
        if(no%i==0){//5%4!=0
            flag=1;
            break;
        }else{
            flag=0;
            
        }
    }
    if(flag==1){
        printf("Not a Prime Number");
    }
    else{
        printf("prime number");
    }
    
    return 0;
}