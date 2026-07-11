#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1, num2, temp1, temp2,x ;
    printf("Enter two integers numbers : \n");
    scanf("%d %d", &num1, &num2 );
    
    if(num1<0 && num2>=0){
        while(num2 != 0){
            num1++;
            num2--;
        }
        printf("The sum of both number is %d", num1);

    }

    else if(num1>=0 && num2<0){
        while(num2 != 0){
            num1--;
            num2++;
        }
        printf("The sum of both number is %d", num1);

    }
    else if(num1>=0 && num2>=0){
        while(num2 != 0){
            num1++;
            num2--;
        }
        printf("The sum of both number is %d", num1);

    }
    else{
        while(num2 != 0){
        num1--;
        num2++;
    }
    printf("The sum of both number is %d", num1);
    }
}