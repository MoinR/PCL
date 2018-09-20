#include <stdio.h>
void main (){
    int a,b;
    char op;
    printf("Enter First operand ");
    scanf("%d",&a);
    printf("Enter Second operand ");
    scanf("%d",&b);
    printf("Enter operator ");
    scanf(" %c",&op);
    if(op == '/' && b == 0){
        printf("Cannot divide by zero ");
    }
    else{
        switch (op){
            case '+':
                printf("Answer is : %d", a + b);
                break;
            case '-':
                printf("Answer is : %d", a - b);
                break;
            case '*':
                printf("Answer is : %d", a * b);
                break;
            case '/':
                printf("Answer is : %d", a / b);
                break;
            case '%':
                printf("Answer is : %d", a % b);
                break;
        }
    }
}
