// Write a C program to find x1+x2+x3+x4+ ….+xn
#include <stdio.h>
void main(){
    int n,x,sum;
    printf("Enter N ");
    scanf("%d",&n);
    sum = 0;
    if(n > 50){
        printf("Invalid Input");
    }
    else{
        // iteration for scanning x and adding into sum variable
        for(int i = 1; i <= n; i++){
            printf("Enter number: ");
            scanf("%d",&x);
            sum += x;
    }
        printf("Sum = %d",sum);
    }

}
