#include<stdio.h>

int fun(int *a, int *b){
    *a = 100;
    *b = 200 ;
}

int main(){
    int a = 20, b=30;
    fun(&a,&b);
    printf("a = %d , b = %d", a , b);
}