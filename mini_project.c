/*
Mini Project 1: “Student Productivity Tracker” 
Objective: Combine loops, arrays, and file handling 
to build a console-based app that 
logs daily study hours and 
generates a weekly progress report. 

array hours[7]
Enter day number (1-7): 2-1
Enter study hours:3

1. Add Daily Study Hours\n"
2. View Weekly Study Record\n"
3. Generate Weekly Report\n"
4. Exit\n"

0   1  2
sun 3
*/

#include<stdio.h>
int main(){
int hours[7],choice,day;
FILE *fp;

for (int i=0;i<7;i++){
    hours[i]=0;
}
do{

     printf("\n===== STUDENT PRODUCTIVITY TRACKER =====\n");
        printf("1. Add Daily Study Hours\n");
        printf("2. View Weekly Study Record\n");
        printf("3. Generate Weekly Report\n");
        printf("4. Exit\n");

    printf("\n Enter your choice :");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("\nEnter day from 1 to 7");
        scanf("%d",&day);
        if(day>1 && day<7){
            printf("\nEnter number of hour u studied");
            scanf("%d",&hours[day-1]);
            if(hours[day-1]<1){
                printf("\n Invalid hours");
                hours[day-1]=0;
            }else{
                printf("\n Hour successfully saved!!!");
            }
        }else{
            printf("\n Invalid Day");
        }
    
    case 2:
    for (int i=0;i<7;i++){
        printf("\n Day:%d  %d:Hours",i+1,hours[i]);
    }
    break;

    case 3:
    int total=0;
        for (int i=0;i<7;i++){
            total=total+hours[i];
        }
        float average=total/7.0;

        printf("\n===== WEEKLY REPORT =====\n");
        printf("Total Study Hours: %d\n", total);
        printf("Average Per Day: %.2f hours\n", average);

        if (total >=35 ){
            printf("\nExecellent");
        }else if(total>=20){
            printf("\n Good");
        }else{
            printf("\nNeed Improvement");
        }
        fp =fopen("study.txt","w");
        if (fp == NULL){
            printf("could not open the file");
            break;
        }else{
            fprintf(fp, "WEEKLY STUDY REPORT\n");

        for (int i=0;i<7;i++){
        fprintf(fp,"\n Day:%d  %d:Hours",i+1,hours[i]);
        }   
        fprintf(fp, "\nTotal Hours: %d\n", total);
        fprintf(fp, "\nAverage Hours: %.2f\n", average);
        fclose(fp);
        printf("\n data saved successfully");
        break;
        }
    case 4:
        printf("Exiting application...\n");
        break;
    default:
        printf("Invalid choice");
}
}
while(choice!=4);

    return 0;
}