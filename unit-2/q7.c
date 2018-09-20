#include <stdio.h>
void main () {
    int marks;
    printf("Enter Marks ");
    scanf("%d",&marks);
    // checking marks through Nested-If
    if(marks >= 75){
        printf("Congrats.! You have got distinction");
    }else if(marks >= 60){
        printf("You have got First number");
    }else if (marks >= 50){
        printf("You have got Second number");
    }else if(marks >= 35){
        printf("Pass");
    }else{
        printf("Oops..! You are failed");
    }

}
