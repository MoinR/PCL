//Factorial
#include <stdio.h>
void main () {
    int n,fact;
    fact = 1;
    printf("Please Enter Number ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("factorial of Numbers = %d",fact);


}
