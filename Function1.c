#include<stdio.h>
//func without parameter without return type
//  void calculate_emi(){
//     int total_amount=152332121;
//     float emi=total_amount/12;
//     printf("\n Emi is %f",emi);
//     }
//func with parameter without return type
// void calculate_emi(int ta){
    
//     float emi=ta/12;
//     printf("\n Emi is %f",emi);
//     }
//func with parameter with return type
float calculate_emi(int ta){
    
    float emi=ta/12;
    return emi;
    }
int main(){
//    calculate_emi();
    printf("emi is %f",calculate_emi(120000));
    return 0;
}