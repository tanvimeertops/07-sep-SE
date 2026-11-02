#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    
    int x=10,y=20;
    printf("\nbefore swapping x=%d and y=%d",x,y);
    swap(&x,&y);
    printf("\n after swapping x=%d and y=%d",x,y);
    return 0;
}