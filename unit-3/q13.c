// Write a C program to find 1+1/2+1/3+1/4+ …+1/n.
#include <stdio.h>
void main(){
    float n;
    printf("Enter n: ");
    scanf("%f",&n);
    for(int i = 1; i <= n; i++){
        printf("\n%.2f",1 / (float)i);
    }
}
