#include <stdio.h>
void main(){
    int a,b,i,gcd,lcm;
    printf("Enter First number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);

    for(i=1; i <= a && i <= b; i++){
    // Checks if i is factor of both integers
    if(a % i == 0 && b % i == 0)
        gcd = i;
    }
    printf("\nGCD of the number : %d",gcd);

    lcm = a * b / gcd;
    printf("\nLCM of the number : %d",lcm);

}
