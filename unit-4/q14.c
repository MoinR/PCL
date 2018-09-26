#include <stdio.h>
#define MAX 25
void main(){
    char ct[MAX]; int i,n;
    printf("Enter String ");
    gets(ct);
    printf("\n");

    for(i = 0; i < n; i++){
        if(ct[i] == 32){
            break;
        }else{
        if(ct[i] >= 97 && ct[i] <=122){
            printf("%c",ct[i]-32);
        }else{
            printf("%c",ct[i]);
        }
        }
    }
}
