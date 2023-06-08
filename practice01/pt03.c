#include<stdio.h>
#include<conio.h>

#define wow printf("+++++++++++++++++++++++++++++\n");
void main(){
 char name[50];
 int price_begin;
 int sale;
wow
printf("Enter Product name :");
scanf("%s" , &name );
wow
printf("Enter Price begin : ");
scanf("%d" , &price_begin);
wow
sale = price_begin +  (price_begin * 10/100);
printf(" Price for sale %d Bath.\n", sale );
    
}