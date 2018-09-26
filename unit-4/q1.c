
#include<stdio.h>

void main(){
    char t[12] = {'C','P','R','O','G','R','A','M','M','I','N','G'};
    int i,j,k;
    for(i = 0; i<12; i++){
        for(j=0; j<=i; j++){
            printf("%c",t[j]);
        }
        printf("\n");
    }
    while(i != 0){
    for(j=0; j<i; j++){
            printf("%c",t[j]);
    }
    printf("\n");
    i--;
    }




}
