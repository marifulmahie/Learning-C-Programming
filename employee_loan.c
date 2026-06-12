#define MAXLOAN 50000
#include<stdio.h>
int main(){
    long int loan1,loan2,loan3,sancloan, sum23;
    printf("Enter the values of previous two loans: \n");
    scanf("%ld %ld", &loan1,&loan2);
    printf("Enter the value of new loan");
    scanf("%ld", &loan3);
    sum23 = loan2 + loan3;
    sancloan = (loan1>0)? 0 :((sum23>MAXLOAN)? MAXLOAN-loan2 : loan3);
    printf("\n \n");
    printf("Previous loand Pending : \n %ld \n %ld", loan1, loan2);
    printf("Loan Requested = %ld \n", loan3);
    printf("Loan sanctioned = %ld \n", sancloan);
}