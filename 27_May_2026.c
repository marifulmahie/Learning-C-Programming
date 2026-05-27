#include<stdio.h>
#include<string.h>
#include<ctype.h>
void to_uppercase(char *str){
        while(*str){
            *str = toupper((unsigned char)*str);
            str++;
        }
    };
int main(){
    float balance = 0, bonus=0;
    char sex[10];
    printf("Enter Your current balance =");
    scanf("%f", &balance);
    printf("Enter your gender:");
    scanf("%9s", sex);
    
    to_uppercase(sex);



    if(strcmp(sex,"FEMALE")==0) {
        if(balance>5000){
            bonus = 0.05 * balance;
            balance = balance + bonus;
        }else{
             bonus= 0.02 * balance ;
        }
        balance = balance + bonus ;
        printf("Your current balance is %f and you got bouns is %f", balance, bonus);
    }else {
             bonus= 0.02* balance ;
             balance= balance + bonus ;
             printf("Youre male \n");
            printf("Your current balance is %f and you got bouns is %f", balance, bonus);

    }

}