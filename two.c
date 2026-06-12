#include<stdio.h>
int main(){
    int customer_Id;
    float unit = 0, charge =0;
    printf("Enter Customer Id and Total Unit of consumption Respectively \n");
    scanf("%d %f", &customer_Id , & unit);
    if(unit>= 0 && unit<= 200){
        charge = unit * 0.50;
        printf("Customer %d You have to pay %f", customer_Id, charge);
    }
    else if(unit>= 201 && unit<= 400){
        charge = 100 + (unit - 200)*0.65;
        printf("Customer %d You have to pay %f", customer_Id, charge);
    }
    else if(unit>= 401 && unit<=600){
        charge = 230 + (unit-400)*0.80 ;
        printf("Customer %d You have to pay %f", customer_Id, charge);
    }
    else if(unit >= 601){
        charge = 390 + (unit-600);
        printf("Customer %d You have to pay %f", customer_Id, charge);
    }

}