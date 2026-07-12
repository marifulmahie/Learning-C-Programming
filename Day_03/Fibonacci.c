#include<stdio.h>
int main(){
    int a , b ,n, result ;
    printf("Enter how many times you need Fibonacci number ? \n");
    a=0;
    b=1;
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++){
        printf("%d \t",a);
        result= a+b;
        a = b;
        b = result;
    }
}