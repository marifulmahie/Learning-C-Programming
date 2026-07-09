#include<stdio.h>
int main(){
    int n,q,fact,result;
    printf("Enter a number to check strong or not :");
    scanf("%d", &n);
    q=n;fact=1;result=0;
    while(q != 0){
        int rem = q%10;
        for(int i=1 ; i<=rem ; i++){
            fact = fact*i;
        }
        result=result +fact;
        fact =1;
        q=q/10;
    }

    if(result == n){
        printf("This is a strong number");

    }else {
        printf("This is not a strong number");
    }
}