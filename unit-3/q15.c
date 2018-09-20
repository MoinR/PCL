#include <stdio.h>
void main (){
    int r,c,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    int i,j,k,l;
    if(n>10){
        printf("Invalid ");
    }
    else{
        for(i = 1;  i<=n; i++){
            for(k = n; k >= i; k--){
                printf(" ");
            }
            for(j = 1; j <= i; j++){
                printf("%d",j);
            }
            for(l = j-2; l>0; l--){
                printf("%d",l);
            }
            printf("\n");
        }
    }
}

