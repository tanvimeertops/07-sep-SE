#include<stdio.h>

int main(){
/*
++ --
*/
int visitors=0;
visitors++;
printf("\nVisitor no %d",visitors);

int page_view;
printf("Enter page view");
scanf("%d",&page_view);
int current_view=page_view++;//100
printf("\ncurrent view %d",current_view);//100
printf("\npage view %d",page_view); //101

int old_emp_num=10;
int new_emp=++old_emp_num;
printf("\nnew emp number is %d",new_emp);
    

    int n=5;
    int m=++n;
    printf("\nM=%d",m); //6
    printf("\nN=%d",n); //6
    return 0;
}