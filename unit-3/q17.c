#include <stdio.h>
void main (){
    int r,c,n,cn;
    cn = 1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(r = 1; r <= n; r++){
        for(int sp = 1; sp <= n-r; sp++){
            printf(" ");
        }
        for(c = 1; c <= r; c++){
            printf("%c ",cn+64);
            cn++;
        }
        printf("\n");
    }
}


