#include <stdio.h>
void main (){
    int n, sq, rem, onum, temp;
    printf("Enter An integer ");
    scanf("%d",&n);
    onum = n;
    int i = 1;

    while(i <= n){
        rem = n % i;
        temp = i * i;
        if(temp == onum && rem ==0){
            printf("Square Root of number = %d",i);
            break;
        }else{
           n = onum;
        }
            i++;
        }
    }


/*
// Using for looop
    for (int i = 2; i <= n; i++){
        rem = n % i;
        temp = i * i;
        if(rem == 0 &&temp == onum){
            printf("Sqrt of number : %d",i);
            break;
        }else{
            n = onum;
        }



*/
