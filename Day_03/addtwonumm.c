#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers= \n");
    scanf("%d %d", &a, &b);
    int sum = 0;
    int carry = 0 ;
    int count = 0 ;

    while(b!=0){
        sum = a^b;
        carry = (a&b)<< 1;
        a = sum ;
        b = carry;
        count++;
    }

    printf("The sum is %d ", a);
    printf("Total iteration = %d", count);
}