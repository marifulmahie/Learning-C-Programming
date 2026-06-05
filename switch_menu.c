#include<stdio.h>
int main(){
    printf("TRAVEL GUIDE \n \n");
        printf("A Air Timing \n");
        printf("T Train Timing \n");
        printf("B Bus Timings \n");
        printf("X To skip \n");
        Printf("Enter Your Choice \n");
        char character = getchar();

        switch (character)
        {
        case 'A':
            air_display();
            break;
        case 'B':
            bus_display();
            break;
        case 'T':
            train_display();
            break;
        
        default:
                printf("No choice \n");
        }

}