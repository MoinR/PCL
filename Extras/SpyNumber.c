    // 7.26
#include <stdio.h>
void main() {
int num, prod, sum, rem,onum;
    printf("Enter Any number ");
    scanf("%d",&num);
    isSpy(num);
}
int isSpy(num){

    int prod, sum, rem,onum;
    onum = num;
    sum = 0;
    prod = 1;
    while(num > 0){
        rem = num % 10;
        num = num / 10;
        sum += rem;
        prod += prod * rem;
    }
    if(sum == onum && prod == onum){
        printf("This is Spy number");
    }
    else{
        printf("This is not Spy number");
    }
    return 0;
}


