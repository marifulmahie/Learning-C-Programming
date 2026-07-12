#include<stdio.h>
int main(){
    int binary=0 ,n, decimal=0 , rem ,weight=1 ;
    printf("Enter a Binary Number = \n");
    scanf("%d",&binary);
    n = binary;
    while(binary != 0){ 
         rem = binary%10;
        decimal = decimal + rem*weight;
        binary/=10;
        weight*=2;
    }
    printf("Decimal of %d is %d ", n , decimal);
}