#include <stdio.h>

int main() {
    int soTruoc = 25; 
    int soNhap;

    printf("Chuong trinh kiem tra so trung khop.\n");

    do {
        printf("Nhap mot so nguyen: ");
        scanf("%d", &soNhap);

        if (soNhap != soTruoc) {
            printf("Sai roi, hay thu lai!\n");
        }
    } while (soNhap != soTruoc);

    printf("Chuc mung! Ban da nhap dung: %d\n", soTruoc);

    return 0;
}

