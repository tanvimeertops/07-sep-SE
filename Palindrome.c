#include<stdio.h>
/*
Palindrome :121
121
123
321 not a palindrome
%10 3
/10 12
2
1

*/
int main(){
    int no,original,sum=0,rev;

    printf("Enter a numaber :");
    scanf("%d",&no); //123
    original=no;
    while(no>0){ //1>0
        rev=no%10; //1
        sum=sum*10+rev; //321
        no=no/10; //0
    }
    if(sum==original){ //121==121
        printf("Palindrome number");
    }else{
        printf("not a Palindrome number");
    }
    return 0;
}