#include <stdio.h>
void main () {
    float one,two,three,four,five,avrg;
    printf("Enter 1st Day's Temprature ");
    scanf("%f",&one);
    printf("\nEnter 2nd Day's Temprature ");
    scanf("%f",&two);
    printf("\nEnter 3rd Day's Temprature ");
    scanf("%f",&three);
    printf("\nEnter 4th Day's Temprature ");
    scanf("%f",&four);
    printf("\nEnter 5th Day's Temprature ");
    scanf("%f",&five);
    avrg = (one + two + three + four + five)/5;
    printf("\nAverage Temprature  = %f",avrg);
}
