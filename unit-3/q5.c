// Write a program to find sum of the digits entered by the user
#include <stdio.h>
void main(){
    int num, rem, sum;
    printf("Enter Any number ");
    scanf("%d",&num);
    sum = 0;
    while(num != 0){
        rem = num % 10;
        num = num / 10;
        sum += rem;
    }
    printf("Sum of digits %d",sum);


}
