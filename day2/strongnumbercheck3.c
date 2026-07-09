#include<stdio.h>
int main(){
    int n,q,result =0;
    int fact[] ={1,1,2,6,24,120,720,5040,40320,362880};
    printf("Enter a number to check strong or not = ");
    scanf("%d",&n);
    q=n;
    while(q!=0){
        int rem =q%10;
        result+=fact[rem];
        q/=10;
    }
    if(result==n){
        printf("This is a Strong number");
        
    }else{
        printf("This is not a strong number");
        
    }

}