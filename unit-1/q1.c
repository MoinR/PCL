#include <stdio.h>
void main(){
 int p,r,n,i,gt; // GT stands for Grand total
        printf("Interest Calculator");
        printf("\n Enter amount of loan ");
        scanf("%d",&p);
        printf("\n Enter Rate of Interest ");
        scanf("%d",&r);
        printf("\n Enter Number of years ");
        scanf("%d",&n);
        i = p*r*n/100;
        printf("\nInterest = %d",i);
        gt = p+i;
        printf("\nAmount payble %d",gt);
        // end
}
