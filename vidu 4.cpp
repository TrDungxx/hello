//
// Created by hover on 4/9/2024.
// Tinh chu vi hinh tron

 #include <stdio.h>
#include <cmath>
int main(){
    float r, c,s ;
    const float PI=3.1415926;
    printf("nhap ban kinh r= :" );
    scanf("%f", &r);
    c=2*PI*r;
    s=PI*r*r;
    printf("chu vi hinh tron la: %0.2f\n", c);
    printf("dien tich hinh tron la: %0.2f", s);


            return 0;


}