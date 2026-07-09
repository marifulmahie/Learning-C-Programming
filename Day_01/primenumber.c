#include<stdio.h>
#include<math.h>
int main(){
    int x , val1,val2,count=0;
    printf("Enter a number to check prime = ");
    scanf("%d",&x);
    val1 = ceil(sqrt(x));

    val2=x;
    for(int i = 2; i<= val1 ; i++){
        if(val2%i == 0){
            count++;
        }

    }
    if(count== 0)
        printf("Prime Number");
    else 
        printf("Composite Number");
}