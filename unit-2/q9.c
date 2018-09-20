#include <stdio.h>
void main (){
    int age;
    printf("Please Enter Your Age ");
    scanf("%d",&age);

    if(age > 18 && age < 55){
        printf("\nYou're Eligible for blood donation");
    }else{
        printf("\nYou're Not Eligible for blood donation");
    }
}
