#include <stdio.h>

void main (){

    int a;
    printf("Enter A number ");
    scanf("%d",&a);
    if(a > 0){
        printf("\nGiven Number is Positive");
    }
    if(a == 0){
        printf("\nGiven Number is Zero");
    }
    if (a < 0){
        printf("\nGiven Number is Negative");
    }

}
