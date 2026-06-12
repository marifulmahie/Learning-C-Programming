#include<stdio.h>
int main(){
    long num;
    int digit;
    int count[10] = {0};

    printf("Enter the number: \n");
    scanf("%ld", & num);
 
    while(num>0){
        digit= num%10 ;
        switch (digit)
        {
            case 0 : count[0]++ ; break;
            case 1 : count[1]++ ; break;
            case 2 : count[2]++ ; break;
            case 3 : count[3]++ ; break;
            case 4 : count[4]++ ; break;
            case 5 : count[5]++ ; break;
            case 6 : count[6]++ ; break;
            case 7 : count[7]++ ; break;
            case 8 : count[8]++ ; break;
            case 9 : count[9]++ ; break;
        }
        num /= 10;
    }

    printf("Digit Occurrences :\n");
    for(int i =0; i<=9 ; i++){
        printf("%d Appears %d Times \n \n", i,count[i]);
    }

}