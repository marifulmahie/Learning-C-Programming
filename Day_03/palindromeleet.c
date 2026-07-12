#include<stdio.h>
#include<stdbool.h>

    bool ispalindrome(int x){
        if(x<0)
            return false;
        int originalnum = x;
        int checknum = 0;
        while(originalnum>0){
            checknum = checknum*10 + originalnum%10 ;
            originalnum /= 10;
        }
        if(checknum== x){
            return true ;
        }else {
            return false ;
        }
    }

    int main(){
        int d = -121 ;
        bool y = ispalindrome(d);
        printf("%d", y);
    }
