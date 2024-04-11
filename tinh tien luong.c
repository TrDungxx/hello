////
//// Created by hover on 4/11/2024.
////
//#include <stdio.h>
//// int tax
//int main(){
//    // Nhap ten nguoi dung
//    char name [50];
//    printf("Nhap ten cua ban: ");
//    scanf("%[^\n]s", name);
//
//    // Nhap so gio lam viec
//    float hoursWorked;
//    printf("Nhap so gio lam viec:");
//    scanf("%f", &hoursWorked);
//
//    // Nhap gia moi gio
//    float hourlyRate;
//    printf("Nhap gia moi gio: ");
//    scanf("%f", &hourlyRate);
//
//    // tinh tong tien luong
//    float totalPayment = hoursWorked * hourlyRate;
//
//    // Ap dung thue (10%)
//    float tax = 0.1* totalPayment;
//    float netPayment = totalPayment- tax;
//
//    //In ket qua
//    printf("\nCam on ban %s da cong tac cung chung toi. \nSau day la so tien luong ban nhan duoc\n", name);
//    printf("---------------------------------------------------------------------------------------\n");
//    printf("Tong so tien luong truoc thue: $%.2f\n", totalPayment);
//    printf("So tien truoc thue (10%%): $%.2f\n", tax);
//    printf("Tong so tien luong sau thue: $%.2f\n", netPayment);
//    return 0;
//}