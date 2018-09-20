
#include <stdio.h>
void main (){
//  Let's take temp and min to store smallest number
    int a,b,c,min,temp;
        printf("Enter First Number ");
        scanf("%d",&a);
        printf("Enter Second Number ");
        scanf("%d",&b);
        printf("Enter Third Number ");
        scanf("%d",&c);
    temp = (a < b)?a:b;
    min = (temp < c)?temp:c;
    printf("Min of three = %d",min);

}
