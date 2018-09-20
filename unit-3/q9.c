#include <stdio.h>
void main () {
    int x,rem,rnum,onum;
    printf("Enter any number ");
    scanf("%d",&x);
    onum = x;
    rnum = 0;
    for(int i=0; i < 10; i++){
        rem = x % 10;
        x = x / 10;
        rnum = rnum * 10 + rem;
        if(x == 0){
            break;
        }
    }
    if(rnum == onum)
        printf("\nPalindrome Number ");
    else
        printf("\nNot Palindrome Number ");



}
