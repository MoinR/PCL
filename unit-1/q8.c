#include <stdio.h>
void main () {
    int x,y,min;
    printf("Enter Any Two numbers");
    scanf("%d%d",&x,&y);
    min = (x < y)? x : y;
    printf("Smallest number = %d",min);

}
