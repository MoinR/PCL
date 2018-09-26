/*
Q 4.Write a program to sort an array.
*/
#include <stdio.h>
void main(){
    int i,j,n,tmp;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d",&ar[i]);
    }

    // Printing array without sorting
    printf("\nElements (Without sorting): ");
    for(int i = 1; i <= n; i++){
        if(i == n){
            printf("%d ",ar[i]);
        }
        else{
            printf("%d",ar[i]);
            printf(",");
        }
    }
    printf("\nElements (sorted): ");
    // Using Bubble sort algorithm

    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            if(ar[j+1] < ar[j]){
                tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
        }
    }




    // Printing Sorted Array

    for(int i = 1; i <= n; i++){
        if(i == n){
            printf("%d ",ar[i]);
        }
        else{
            printf("%d",ar[i]);
            printf(",");
        }
    }



}
