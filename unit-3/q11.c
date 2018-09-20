//Prime number from 50 to 100
#include <stdio.h>
void main(){
    int num,rem,i,logic;
    num = 50;
    for(num = 50; num <= 100; num++){
        for(i = 2; i < num; i++){
            rem = num % i;
            if(rem == 0){
                logic = 0;
                break;
            }
            else{
                logic = 1;
            }
        }
        if(logic == 1){
            printf("\n%d",num);
        }
    }
}
