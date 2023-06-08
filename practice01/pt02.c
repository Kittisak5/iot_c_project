#include<stdio.h>
#define wow printf("+++++++++++++++++++++++++++++\n");

void main(){
    float widths,longs,highs,color_use;

wow
printf("Program Color\n");
wow
printf("Input widths: ");
    scanf("%f",&widths);
wow
printf("Input longs: ");
    scanf("%f",&longs);
wow
 printf("Input highs: ");
    scanf("%f",&highs);    
wow
color_use = widths * longs / 3;
printf(" Color Use: %.2f\n",color_use);

getch();
}