#include <stdio.h>

void main(){

    char category;
    long car_value;
    long premium;

    printf("We Are offering Three categories of premium : ");
    printf("\n\n Category A, here the basic premium is calculated as 2 percent of the car's value.");
    printf("\n\n Category A, here the basic premium is calculated as 3 percent of the car's value.");
    printf("\n\n Category A, here the basic premium is calculated as 5 percent of the car's value.");

    printf("\nPlease Select Category(Enter A OR B OR C) ");
    scanf(" %c",&category);
    printf("Enter Value of Car ");
    scanf("%l",&car_value);

    if(category == 'a' || category == 'A'){
        premium = (car_value * 2)/100;
        printf("Amount of Premium = %ld",premium);
    }
    else if(category == 'b' || category == 'B'){
        premium = (car_value * 3)/100;
        printf("Amount of Premium = %l",premium);

    }else if(category == 'c' || category == 'C'){
        premium = (car_value * 5)/100;
        printf("Amount of Premium = %l",premium);
    }else{
        printf("Invalid category");
    }
}
