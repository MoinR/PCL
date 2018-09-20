#include<stdio.h>
void main (){
  int a,b;
  printf("Enter First Number ");
  scanf("%d",&a);
  printf("Enter Second Number ");
  scanf("%d",&b);
    if(a > b){
        printf(" Greater Number = %d",a);
    }
    else if (b > a){
        printf(" Greater Number = %d",b);
    }
    else {
        printf("Both numbers are equal ");
    }
}
