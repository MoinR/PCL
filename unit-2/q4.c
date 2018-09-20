#include <stdio.h>
void main(){
    int year;
    printf("Enter Year ");
    scanf("%d",&year);
    if(year > 9999){
        printf("Invalid Input");
    }
    if(year % 100 == 0 || year % 4 ==0){
        printf("%d is leap year ",year);
    }
    else if(year % 4 == 0){
        printf("%d is leap year ",year);
    }else{
        printf("%d is Not leap year ",year);
    }

}
