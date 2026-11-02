#include<stdio.h>
#include<string.h>
/*
Structure : stores different datatypes 

*/
struct Emplyoee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct Emplyoee e1;
    e1.id=15669;
    strcpy(e1.name,"jetal");
    e1.salary=785963;

    printf("\nId is %d",e1.id);
    printf("\n Name is %s",e1.name);
    printf("\n salary is %f",e1.salary);
    return 0;
}