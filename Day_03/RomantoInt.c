#include<stdio.h>
#include<string.h>

int romanToInt(char* s) {
    int roman[256]={0};
    roman['I']=1;
    roman['V']=5;
    roman['X']=10;
    roman['L']=50;
    roman['C']=100;
    roman['D']=500;
    roman['M']=1000;
    int total =0 ;
    int n = strlen(s);
    for(int i = 0 ; i<n ; i++){
        if(i+1 < n && roman[(unsigned char)s[i]]< roman[(unsigned char)s[i+1]]){
            total = total - roman[(unsigned char)s[i]];
        }
        else {
            total = total + roman[(unsigned char)s[i]];
        }
    }
    return total ;

}


int main(){
    char s[20];
    printf("Enter a Roman Number = ");
    scanf("%s", &s);
    printf(" Integer Value is %d ", romanToInt(s));
}