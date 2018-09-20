#include <stdio.h>
void main (){
    int r,c,n;

    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(r = 1; r <= n; r++){
        for(int sp = 1; sp <= n-r; sp++){
            printf(" ");
        }
        for(c = 1; c <= r; c++){
            printf("%d ",c%2);

        }
        printf("\n");
    }
}



