/*
perfect number :
if sum of all factors of the given number is equal to number
    6 => 1,2,3
    1 + 2 + 3 = 6
*/
#include <stdio.h>
void main (){
    int num, rem, sum,onum;
    printf("Enter Any number ");
    scanf("%d",&num);
    isPerfect(num);
}
int isPerfect(int num){
 int rem, sum,onum;
    onum = num;
    sum = 0;
    //printf("Factors : ");
    int i = 1;
    while(i < num){
        if(num % i == 0){
            sum += i;
        }
        i++;
    }
    if(sum == onum)
        printf("\nPerfect number ");
    else
        printf("\nNot perfect number ");
}
