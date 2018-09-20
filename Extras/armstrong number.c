/*
An Armstrong number of three digits is an integer such that the sum of
the cubes of its digits is equal to the number itself. For example,
371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.
(cube of Number : 3 ** 3 )
*/

#include <stdio.h>
void main(){
    int num,onum,rem,sum;
        printf("Enter Any number :");
        scanf("%d",&num);
        isArmstrong(num);
}
int isArmstrong(int num){
       int onum,rem,sum;
        onum = num;
        sum = 0;
        while(num > 0){
            rem = num % 10;
            num = num / 10;
            sum += rem * rem * rem;
        }
        //printf("%d\n",sum);
        if(sum == onum){
            printf("This number is Armstrong number");
        }else{
            printf("This number is not Armstrong number");
        }
        return 0;
}
