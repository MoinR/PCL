/*
Q 2. Write a program which will take 10 numbers from user
and stored it in the array. It will print all the numbers, their sum and
average of it.
*/
#include <stdio.h>
void main(){
    int sum,avrg;
    int ar[10];
    sum = 0;
    for(int i = 0; i <10; i++){
        printf("Enter number ");
        scanf("%d",&ar[i]);
        sum += ar[i];
    }

    //printing elements
    printf("Elements of array :");
    for(int a = 0; a < 10; a++){
        printf("\n%d",ar[a]);

    }


    printf("\nSum = %d",sum);
    avrg = sum / 10 ;
    printf("\nAverage = %d",avrg);
}
