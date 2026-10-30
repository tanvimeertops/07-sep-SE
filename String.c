#include<stdio.h>
#include<string.h>
/*
String : collection of character
functions:
stringlen
stringcpy
stringcmp
stringcat

*/
int main(){
    char name[]="Tops Technologies";
    printf("Name is %s",name);
    char pass[]="admin";
    if(strlen(pass)>=8){
        printf("\nvalid length!!!");
    }else{
         printf("\ninvalid length!!!");
    }
    char email[]="tanvi@tops.com";
    char backup[50];   
    strcpy(backup,email);
    printf("\n backup email is  %s",backup);
    int res=strcmp(pass,"admin");
    printf("\n%d", res);
    if(res==0){
        printf("\nvalid password!!!");
    }else{
        printf("\n invalid password!!!");
    }

    char val1[]="Hello ",val2[]="World";
    printf("\n%s",strcat(val1,val2));

   
    char address[50];
    printf("\n Enter your address :");
    // scanf("%s",address);//quit from space
    fgets(address,sizeof(address),stdin);
    printf("\n %s",address);
    
    return 0;
}