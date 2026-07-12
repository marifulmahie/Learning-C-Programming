#include<stdio.h>
int main(){
    int row , n , i ,j;
    printf("How many rows in Floy's Triangle ?");
    scanf("%d", &row);
    n =1 ;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d", n);
            printf("\t");
            n++;

        }
        printf("\n");
    }
}