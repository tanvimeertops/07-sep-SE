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
    char data[100];
    //to open and write into file
    FILE *fp;
    // fp=fopen("student.txt","w");
    fp =fopen("transaction.txt","r");
    // fscanf(fp,"%s",data);
    while(fgets(data,sizeof(data),fp)!=NULL){
         printf("%s",data);
    }
   
    fclose(fp);
    return 0;
}