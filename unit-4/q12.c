#include <stdio.h>
#define MAX 25
void main(){
    char ct[MAX]; int i,n;
    n = 0;
    printf("Enter String ");
    gets(ct);



    for(i = 0; i < MAX; i++){

        if(ct[i] == ' ' || ct[i] == 32 || ct[i]== 10){
            break;
        }
        else{
            n++;
        }



    }
    printf("Length of string : %d",n);

}

