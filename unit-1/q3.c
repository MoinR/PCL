#include <stdio.h>
void main(){
    //Global declaration
    int a,b,c;
    int square;
    int cube;

    printf("Enter First Number ");
    scanf("%d",&a);
    printf("\nEnter Second Number ");
    scanf("%d",&b);
    printf("\nEnter Third Number ");
    scanf("%d",&c);

    square = a*a;
    printf("\nSquare of First nuber = %d",square);
    cube = a*a*a;
    printf("\nCube of First nuber = %d",cube);

    square = b*b;
    printf("\n\nSquare of Second nuber = %d",square);
    cube = b*b*b;
    printf("\nCube of Second nuber = %d",cube);

    square = c * c;
    printf("\n\nSquare of Third nuber = %d",square);
    cube = c*c*c;
    printf("\nCube of Third nuber = %d\n",cube);

}
