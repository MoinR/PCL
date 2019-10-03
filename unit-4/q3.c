#include <stdio.h>
void main(){
    int num,rem,i;
    int bin[10];

    printf("Enter number :");
    scanf("%d",&num);

    i = 0;
    while(num > 0){
        rem = num % 2;
        num = num / 2;
        bin[i] = rem;
        i++;
    }
    for(int k = i-1; k>= 0; k--){
        printf("%d",bin[k]);
    }
}
