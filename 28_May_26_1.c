#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the value of three numbers :");
    scanf("%f %f %f", &a , &b, &c);
    if(a>b){
        if(a>c){
            printf(" The larget number is %f", a);
        }
        
    }else {
        if(b>c){
                printf(" The larget number is %f", b);

        }
        else {
                printf(" The larget number is %f", c);

        }
    }
}
