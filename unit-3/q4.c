//Reverse the number
#include <stdio.h>
void main () {
    int x,rem,rnum;
    printf("Enter any number ");
    scanf("%d",&x);
    rnum = 0;
    for(int i=0; i < 10; i++){
        rem = x % 10;
        x = x / 10;
        rnum = rnum * 10 + rem;
        if(x == 0){
        printf("%d",rnum);
        break;
        }
    }


}
