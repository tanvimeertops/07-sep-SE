#include<stdio.h>
#include<string.h>
/*
Structure with array
*/

struct student{
    int roll_no;
    char name[50];
    char grade;
};
int main(){
    struct student s[2];
    s[0].roll_no=125;
    strcpy(s[0].name,"jetal");
    s[0].grade='A';

    s[1].roll_no=455;
    strcpy(s[1].name,"roshni");
    s[1].grade='B';
    for(int i=0;i<2;i++){
        printf("\n Roll no is %d",s[i].roll_no);
        printf("\n Name is %s",s[i].name);
        printf("\n Grade is %c",s[i].grade);
    }
    

    return 0;
}