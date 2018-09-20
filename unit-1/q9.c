#include<stdio.h>
void main () {
    int a,rem;
    printf("Enter Any number ");
    scanf("%d",&a);
    rem = a % 2;
    printf("\n%d % 2 = %d",a,rem);
    rem = a % 3;
    printf("\n%d % 3 = %d",a,rem);
    rem = a % 4;
    printf("\n%d % 4 = %d",a,rem);

}
