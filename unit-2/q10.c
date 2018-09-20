#include <stdio.h>

void main () {
    int page,copy,total_copies,copy_charge,type_charge,total_charge;
    char name[20];
        //Getting Required information
        printf("\t\t\t****  WELCOME TO PCL JOB WORKERS  ****");
        printf("\nEnter your name ");
        gets(name);
        printf("\nHello..! %s\nHow many pages we should type for you ? ",name);
        scanf("%d",&page);
        printf("\nHow many copy of pages we should give you ?  ");
        scanf("%d",&copy);

        // Calculation of copy charge
        total_copies = page * copy;
        copy_charge = 5;
        total_copies--;
        copy_charge += total_copies * 3;
        type_charge = page * 3;
        total_charge = type_charge + copy_charge;

        // Printing bill
        printf("\n\t\t\t**** PCL JOB WORKERS ****");
        printf("\nCustomer Name : %s",name);
        printf("\n\nParticulars\tUnit\t\tAmount");
        printf("\n\nTyping\t\t%d\t\t%d",page,type_charge);
        printf("\nCopies\t\t%d\t\t%d",copy,copy_charge);
        printf("\n \t\t\tTotal : %d",total_charge);

}
