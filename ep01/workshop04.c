
#include<stdio.h>

int main(){
    char name[50];
    short age; 
    double salary;

    printf("Enter your name :");
    scanf("%s" , &name );
    printf("Enter your age :");
    scanf("%hi" , &age );
    printf("Enter your salary :");
    scanf("%lf" , &salary);
    printf("*******************************\n");
    printf("Hi...%s\n",name);
    printf("You are %d years old.\n", age);
    printf("Your salary is %.2lf Bath.\n", salary );









    return 0;
}