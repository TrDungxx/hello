//
// Created by hover on 4/14/2024.
//
#include <stdio.h>

//int bmi(){
    int main(){
    // Khai bao bien cho can nang va chieu cao
    float weight, height;

    // nhap can nang va chieu cao tu ng dung
    printf("Nhap can nang(kg): ");
    scanf("%f", &weight);

    printf("Nhap chieu cao(m): ");
    scanf("%f", &height);

    // Tinh chi so BMI
    float bmi= weight / (height*height);

    // In chi so BMI
    printf("Chi so BMI cua ban la: %.2f\n", bmi);

    // Xac dinh tinh trang suc khoe
    if (bmi <18.5){
        printf("Ban dang o trong tinh trang gay.\n");
    } else if (bmi < 24.9){
        printf("Ban dang o trong tinh trang binh thuong.\n");
    }else if (bmi<29.9){
        printf("Ban dang o trong tinh trang thua can.\n");
    } else {
        printf("Ban dang o trong tinh trang beo phi.\n");
    }
    return 0;
}
