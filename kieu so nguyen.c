//
// Created by hover on 4/11/2024.
//
#include <stdio.h>
// int demo_datatype()
int main(){
    // Kieu so nguyen
    int integerVar=10;
    printf("Kieu so nguyen:%d\n", integerVar);

    // Kieu so thuc
    float floatVar = 3.14;
    printf("Kieu so thuc: %2f\n", floatVar);

    // Kieu ky tu
    char charVar ='A';
    printf ("Kieu ky tu:%c\n", charVar);

    // Kieu Boolean (su dung kieu int)
    int Boolean = 1; //1 la true, 0 la false
    printf("Kieu Boolean: %d\n", Boolean);

    // Kieu chuoi ky tu(mang ky tu)
    char stringVar[] = "Hello, world!";
    printf("Kieu chuoi ky tu: %s\n", stringVar);

    return 0;
}