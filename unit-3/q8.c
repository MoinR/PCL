// Even and odd sum up to 100
#include <stdio.h>

void main(){
    int OddSum,EvenSum = 0;

    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0 ){
            EvenSum += i;
        }else{
            OddSum += i;
        }
    }
        printf("\nSum of all Odd number up to 100 : %d",OddSum);
        printf("\nSum of all Even number up to 100 : %d",EvenSum);
}
