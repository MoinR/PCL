void main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    isPrime(num);

}
int isPrime(int num){
    int rem,i,logic;
    i = 2;
    while(i < num){
        rem = num % i;
        if(rem == 0){
            logic = 0;
            break;
        }
        else{
            logic = 1;
        }
        i++;
    }
    if(logic == 1){
        printf("\nNumber is prime");
    }
    else{
        printf("Number is not prime");
    }
    return 0;
}
