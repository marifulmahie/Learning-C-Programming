#include<stdio.h>
int main(){
    int num1, num2, temp1, temp2 ;
    printf("Enter two integers numbers : \n");
    scanf("%d %d", &num1, &num2 );
    temp2 = num2;
    temp1=num1;
    while(num2 != 0){
        num1++;
        num2--;
    }
    printf("The some of %d and %d is %d", temp1, temp2 ,num1 );
}