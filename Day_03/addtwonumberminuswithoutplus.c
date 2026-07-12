#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers= \n");
    scanf("%d %d", &x, &y);

    if(y>0){
            while(y!=0){
                x++;
                y--;
            }
    }
    else if(y<0){
                while(y!=0){
                    x--;
                    y++;
                }

    }

    printf("The sum is = %d", x);
}