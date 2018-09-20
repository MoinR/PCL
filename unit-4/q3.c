#include <stdio.h>
void main(){
    int num,rem,i,j;
    int bin[10];

    printf("Enter number :");
    scanf("%d",&num);

    i = 0; j = 0;
    while(num > 0){
        rem = num % 2;
        num = num / 2;
        bin[i] = rem;
        i++;
        j++;
    }
    for(int k = j-1; k>= 0; k--){
        printf("%d",bin[k]);
    }
}
