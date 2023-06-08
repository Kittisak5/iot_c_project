#include<stdio.h>
#include<conio.h>

#define wow printf("+++++++++++++++++++++++++++++\n");
void main(){
 int id ;
 char name[50];
 double salary;
 int salary_total;
wow
printf("Enter empoloyee id :");
scanf("%d" , &id );
wow
printf("Enter employee name :  ");
scanf("%s" , &name);
wow
printf("Enter empoloyee salary :");
scanf("%lf" , &salary);
wow
salary_total = salary - (salary * 7 /100) -500;
wow
printf(" Salary total is %d Bath.\n", salary_total );
    
}