// sum of N numbers
#include <stdio.h>
void main(){
    int x,n1,n2,i;
    printf("How many numbers you have ? ");
    scanf("%d",&x);
    if(x>0){
        printf("Enter number : ");
        scanf("%d",&n1);
        x--;
    }
    i=0;
    while(i<x){
        printf("Enter number : ");
        scanf("%d",&n2);
        if(n1<n2){
            n1 = n2;
        }
        i++;
    }
    printf("Max number = %d",n1);


}
