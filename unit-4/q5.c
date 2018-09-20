/*
Write a program to search an element from the array
*/
#include <stdio.h>
void main(){
    int a,flag;
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Enter value :");
    scanf("%d",&a);
    for(int i = 0; i < 10; i++){
        if(array[i] == a){
            printf("Element exists in array ");
            printf("\nIndex of number %d is %d",a,i);
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }
    }

    if(flag == 0){
        printf("Can't find an element ");
    }
}

