#include <stdio.h>
void main (){
int a,b,ia,ib; // ia stands for interchanged A
    printf("Enter Value of first variable ");
    scanf("%d",&a);

    printf("\nEnter Value of second variable ");
    scanf("%d",&b);

    printf("\nOriginal values ");
    printf("\n A = %d",a);
    printf("\n B = %d",b);

    printf("\nInterchanged values ");
    ia = b;
    printf("\nA = %d",ia);
    ib = a;
    printf("\nB = %d",ib);

}
