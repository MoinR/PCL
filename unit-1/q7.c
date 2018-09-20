#include <stdio.h>
#include <string.h>
void main (){
    char x[25];
    int l;
    printf("Enter Your Name ");
    gets(x);
    printf("Your name is %s",x);
    l = strlen(x);
    printf("\n%d",l);
}
