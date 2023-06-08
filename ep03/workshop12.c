#include<stdio.h>
#include<conio.h>
#define wo printf("----------------\n");
void main(){
char  car_number[20];
double car_wight; 
printf("Program Truck\n");
wo
printf("Input CarNumber\n");
scanf("%s",&car_number);
wo
printf("Input CarWight");
scanf("%lf",&car_wight);

if(car_wight<=2500){
printf("Pass....\n");

}else {
printf("Notpass...\n");
}







}