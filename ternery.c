#include<stdio.h>
/*
if (a>b ){
printf("a is greater");

}else{
    printf("b is greater");
}
    condition ? value_if_true : value_if_false;
*/
int main(){
    int age=19;
    char *res=(age>=18)?"Eligible":"Not Eligible";
    printf("\n%s",res);

    int amount=6000;
    int discount=(amount>5000)?10:0;
    printf("\ndiscount is %d%%",discount);
    return 0;
}