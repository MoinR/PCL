// Smallest number without logical, conditional and nested if
#include <stdio.h>
void main (){
    int a,b,c,min;

    printf("Enter number ");
    scanf("%d%d%d",&a);
    printf("Enter Second number ");
    scanf("%d",&b);
    printf("Enter Third number ");
    scanf("%d",c);
    min = a;
    if(b < min)
        min = b;
    if(c < min)
        min = c;
    printf("Smallest Number : %d",min);
}


