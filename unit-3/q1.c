#include <stdio.h>

void main () {
    int n,sum;
    sum = 0;
    printf("Enter N : ");
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        sum += i;
    }

    printf("Sum of Numbers = %d",sum);

}
