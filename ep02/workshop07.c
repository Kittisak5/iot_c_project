//ทำโปรแกรมคำนวณพื้นที่สี่เหลี่ยม และพื้นที่สามเหลี่ยม โดยการป้อนกว้าง ยาวสำหรับคำนวณพื้นที่สี่เหลี่ยมทางแป้นพิมพ์และแสดงผลพื้นที่ที่คำนวณได้ทางหน้าจอ//

#include<stdio.h>
#include<conio.h>

#define wow printf("+++++++++++++++++++++++++++++\n");

void main(){
    float widths,longs,area_square,bases,highs,area_triangle;
    
    wow
    printf("Program Area Shapes\n");
    wow
    printf("Input widths: ");
    scanf("%f",&widths);

    printf("Input longs: ");
    scanf("%f",&longs);
    wow
    area_square = widths * longs;
    printf(" area square: %.2f\n",area_square);
    wow 

     wow
    printf("Program Area bases\n");
    wow
    printf("Input bases: ");
    scanf("%f",&bases);

    printf("Input highs: ");
    scanf("%f",&highs);
    wow
    area_triangle = bases * highs / 2;
    printf(" area triangle: %.2f\n",area_triangle);


    getch();
    
}