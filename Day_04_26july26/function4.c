#include<stdio.h>
int add(int, int);
int main(){
    int m = 20, n=30,sum=0;
    sum = add(m,n);
    printf("sum is %d", sum);
}
int add(int var1 , int var2){
    return (var1+var2);
}