#include <stdio.h>

int main() {
    int n, tong = 0;

    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Vui long nhap mot so nguyen duong lon hon 0.\n");
        }
    } while (n <= 0);

    // Tính t?ng t? 1 ð?n n
    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    // In k?t qu?
    printf("Tong cac so tu 1 den %d la: %d\n", n, tong);

    return 0;
}

