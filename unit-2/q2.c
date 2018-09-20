#include <stdio.h>
void main () {
    //  Let's take three variables to store a number
    int a,b,c;
        printf("Enter First Number ");
        scanf("%d",&a);
        printf("Enter Second Number ");
        scanf("%d",&b);
        printf("Enter Third Number ");
        scanf("%d",&c);

    // Checking through Nested-if
    if(a > b) {
        if(a > c){
          printf("Maximum number = %d",a);
        }
    }else if(b > c){
        printf("Maximum number = %d",b);
    }else{
        printf("Maximum number = %d",c);
    }
}
