#include<stdio.h>
int main(){
    int grade;
    printf("Enter the number obtained by the student ");
    scanf("%d", &grade);
    if(grade < 100 && grade >79){
        printf("Grade is Honours [H]");}
    else if(grade < 79 && grade > 60)
        printf("First Division");
    else if(grade < 59 && grade >50)
        printf("Second Division");
    else if(grade < 49 && grade > 40)
        printf("Third Division");
    else if (grade < 39 && grade > 0)
        printf("Fail");
    else 
        printf("This is not a valid mark");
}