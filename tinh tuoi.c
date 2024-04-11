//
// Created by hover on 4/11/2024.
//
#include <stdio.h>
#include <stdlib.h>

//int tinhtuoi(){
    int main (){
    // nhap ten nguoi dung
    char name[50];
    printf("Nhap ten cua ban: ");
//     scanf("%s",name);
    scanf("%[^\n]s", name);

    // Nhap nam sinh nguoi dung
    int birthYear;
    printf("Nhap nam sinh cua ban: ");
    scanf("%d", &birthYear);

    // Tinh toan tuoi
    int currentYear = 2024;
    int age = currentYear - birthYear;

    // In thong tin va loi chao dua tren tuoi
    printf("Xin chao, %s!\n", name);
    printf("Ban %d tuoi.\n", age);

    if (age<0){
        printf("Xin loi, co ve nhu banj da nhap sai nam sinh.\n");
    }else if (age<18){
        printf("Ban la mot nguoi tre tuoi!\n");
    }else if (age <60){
        printf("Ban la mot nguoi truong thanh!\n");
    }else{
        printf("Ban la mot nguoi cao tuoi!\n");
    }
    return 0;
}
