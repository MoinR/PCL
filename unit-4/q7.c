#include <stdio.h>
#define A 3
void main(){
    int x[A][A],y[A][A],z[A][A],m[A][A] , i,k,j;

    // First Matrix
    printf("Enter First Matrix : \n");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
        printf("ENTER VALUE : ");
        scanf("%d", &x[i][j]);
        }
    }
    printf("Enter Second Matrix : \n");

    // second matrix
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
        printf("ENTER VALUE : ");
        scanf("%d", &y[i][j]);
        }
    }

    // Summation of matrix
     for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
           z[i][j] = x[i][j] + y[i][j];
        }
     }

    // Printing Matrices
    printf("First Matrix : \n");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
        printf("%d \t",x[i][j] );
        }
        printf("\n");
    }

    printf("Second Matrix : \n");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
        printf("%d \t",y[i][j] );
        }
        printf("\n");
    }



    printf("Multiplication of Matrix : \n");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            for(k=0; k<3; k++){
                m[i][j] = m[i][j] + x[i][k] * y[k][i];
            }
        }
    }
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
        printf("%d \t",m[i][j] );
        }
        printf("\n");
    }

}

