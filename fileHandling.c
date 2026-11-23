#include<stdio.h>
/*
Open File
     ↓
Read / Write
     ↓
Close File

w=over wright
a=append
*/
int main(){
    //to open and write into file
    FILE *fp;
    // fp=fopen("student.txt","w");
    fp =fopen("transaction.txt","a");
    //to write into the file 
    fprintf(fp,"deposite 10000");
    //to close file
    fclose(fp);
    return 0;
}