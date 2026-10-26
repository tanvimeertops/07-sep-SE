#include<stdio.h>
/*
array is collection of element of similar type
*/
int main(){
    //12 45 96 74 41
    // int a[5]={12,45,96,74,41};
    // for(int i=0;i<5;i++){
    //      printf("\n%d",a[i]);
    // }
    int marks[5]={34,56,84,59,23};
    for(int i=0;i<5;i++){
         printf("\nMarks in subject %d is %d",i+1,marks[i]);
    }
   
    int sales[5]={1234,4566,7899,1245,8904};
    for(int i=0;i<5;i++){
         printf("\nDay %d sales is %d",i+1,sales[i]);
    }
    return 0;
}