#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers= \n");
    scanf("%d %d", &x, &y);

    while(y>0){

        x++;
        y--;
    }

    while(y<0){
        x--;
        y++;

    }

    printf("The sum is = %d", x);


}