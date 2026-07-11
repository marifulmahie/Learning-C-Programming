#include<stdio.h>
int main(){
     int num1, num2;
    printf("Enter two integers numbers : \n");
    scanf("%d %d", &num1, &num2 );

    while(num2>0){
        num1++;
        num2--;

    }

    while(num2<0){
        num2++;
        num1--;

    }
    printf("The sum is= %d ",num1 );

}
    
