#include<stdio.h>
void main (){
    int sec, min,hours;
    printf("Enter seconds : ");
    scanf("%d",&sec);
    hours = sec / 3600;
    sec = sec % 3600;
    min = sec / 60;
    sec = sec % 60;

    printf("%d Hours %d Min %d Sec",hours,min,sec);

}
