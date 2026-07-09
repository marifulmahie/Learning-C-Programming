#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i = 1 ;i<=n;i++){
        fact*=i;
    }
    return fact ;
}

int main(){
    int n,q,result=0;
    printf("Enter a number to check wheather its strong or not = ");
    scanf("%d",&n);
    q=n;
    while(q!=0){
        int rem = q%10;
        result+= factorial(rem);
        q /=10;
    }

    if(result==n){
        printf("This is a Strong number");
        
    }else{
        printf("This is not a strong number");
        
    }
}