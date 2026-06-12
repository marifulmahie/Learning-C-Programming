#include<stdio.h>
#include<math.h>
int main(){
    double x,y;
    read:
    scanf("%f",&x);
    if(x<0) goto read;
    y=sqrt(x);
    printf("%f %f \n", x ,y);
    goto read;
}