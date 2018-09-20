#include <stdio.h>
void main () {
    // Global declarations
    int opts,a,b,c,area,perimeter;
    // Executable part
        printf("\t\t\t****** Area and Square calculator ******");
        printf("\nPlease Select shape");
        printf("\n\t 1. Square");
        printf("\n\t 2. Rectangle\n");
        printf("Enter 1 or 2 > ");
        scanf("%d",&opts);
    // Conditional statement c
    if(opts == 1){
        printf("\nYou have selected Square ");
        printf("\nEnter value of side ");
        scanf("%d",&a);
        area = a * a;
        perimeter = 4*a;
        printf("\nArea of Square = %d",area);
        printf("\nPerimeter of Square = %d",perimeter);
        printf("\n");
    }else if(opts == 2){
        printf("\nYou have selected Rectangle ");
        printf("\nEnter height ");
        scanf("%d",&a);
        printf("\nEnter Width ");
        scanf("%d",&b);
        // Area and perimeter of rectangle
        perimeter = 2 * (a + b);
        area = a * b;
        printf("\nArea of Rectangle %d",area);
        printf("\nPerimeter of Rectangle %d",perimeter);
        printf("\n");
    }else{
        printf("\nInvalid Input ");
    }



}
