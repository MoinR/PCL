/*
This header file is created by Moin
This header file is consist of different types of program for numbers such as
Armstrong number,Spy number, Prime number, Perfect number;
*/
int isArmstrong(int num){
       int onum,rem,sum;
        onum = num;
        sum = 0;
        while(num > 0){
            rem = num % 10;
            num = num / 10;
            sum += rem * rem * rem;
        }
        if(sum == onum){
            printf("This number is Armstrong number");
        }else{
            printf("This number is not Armstrong number");
        }
        return 0;
}

int isPerfect(int num){
    int rem, sum,onum;
     onum = num;
     sum = 0;
     int i = 1;
     while(i < num){
        if(num % i == 0){
            sum += i;
        }
        i++;
     }
      if(sum == onum){
           printf("\nPerfect number ");
      }
      else{
           printf("\nNot perfect number ");
      }
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
}

int isSpy(num){

    int prod, sum, rem,onum;
     onum = num;
     sum = 0;
     prod = 1;
     while(num > 0){
        rem = num % 10;
        num = num / 10;
        sum += rem;
        prod += prod * rem;
     }
        if(sum == onum && prod == onum){
            printf("This is Spy number");
        }
        else{
            printf("This is not Spy number");
        }
        return 0;
}




