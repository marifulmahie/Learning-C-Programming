#include<stdio.h>
int main(){
    int index , mark ;
    char grade;
    printf("Enter your mark:");
    scanf("%d", &mark);
    index = mark/10;
    switch(index) {
        case 10 :
        case 9 :
        case 8 : 
                grade = 'H';
                break ;
        case 7 :
                grade = 'A';
                break;
        case 6 :
                grade = 'A';
                break;
        case  5 :
                grade = 'B';
                break;
        default :
                    grade = 'F';
                    break;
    }

    printf("%c is your grade ", grade);
}