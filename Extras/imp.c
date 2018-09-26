#include <stdio.h>
#include "numbers.h"
void main(){
    int n,x;
    do{
        printf("\n|----- Menu ----|");
        printf("\n 1. Armstrong Number ");
        printf("\n 2. Spy Number ");
        printf("\n 3. Perfect Number ");
        printf("\n 4. Prime Number ");
        printf("\n 5. Exit ");
        printf("\nEnter your choice ");
        scanf("%d",&n);

        if(n == 1){
            printf("Enter Number : ");
            scanf("%d",&x);
            printf("\n");
            isArmstrong(x);
            printf("\n");
        }else if(n == 2){
            printf("Enter Number : ");
            scanf("%d",&x);
            printf("\n");
            isSpy(x);
            printf("\n");
        }else if(n == 3){
            printf("Enter Number : ");
            scanf("%d",&x);
            printf("\n");
            isPerfect(x);
            printf("\n");
        }else if(n == 4){
            printf("Enter Number : ");
            scanf("%d",&x);
            printf("\n");
            isPrime(x);
            printf("\n");
        }else if(n == 5){
            printf("\n");
            printf("Good Bye");
            printf("\n");
        }
    }while(n != 5);

}
