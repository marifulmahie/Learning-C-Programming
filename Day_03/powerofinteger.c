#include<stdio.h>
int main(){
    int base1, exponent1,exponent2 , power1=1 ,  expo ;
    double power2 = 1.0 ;
    printf("Enter The Base : ");
    scanf("%d", &base1);
    printf("Enter the exponent : ");
    scanf("%d", & exponent1);
    expo = exponent1 ;
    if(exponent1>=0){
        while(exponent1 != 0){
            power1 = power1*base1;
            exponent1--;
        }
        printf("%d to the power of %d is %d ", base1 , expo , power1);
    }
    exponent2 = expo ;
    if (exponent2<0){
        while(exponent2!=0){
            power2 = power2 * (1.0/base1);
            exponent2++;
        }
        printf("%d to the power of %d is %.10f ", base1 , expo , power2);
        
    }

    
}