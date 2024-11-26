#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    // Yêu c?u ngý?i dùng nh?p 2 s?
    printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);

    // L?p l?i cho ð?n khi ngý?i dùng ch?n "Thoát"
    do {
        // Hi?n th? menu
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        // X? l? theo l?a ch?n
        switch (choice) {
            case 1: // Tính t?ng
                result = num1 + num2;
                printf("Tong cua %.2f va %.2f la: %.2f\n", num1, num2, result);
                break;
            case 2: // Tính hi?u
                result = num1 - num2;
                printf("Hieu cua %.2f va %.2f la: %.2f\n", num1, num2, result);
                break;
            case 3: // Tính tích
                result = num1 * num2;
                printf("Tich cua %.2f va %.2f la: %.2f\n", num1, num2, result);
                break;
            case 4: // Tính thýõng
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Thuong cua %.2f va %.2f la: %.2f\n", num1, num2, result);
                } else {
                    printf("Loi: Khong the chia cho 0.\n");
                }
                break;
            case 5: // Thoát
                printf("Thoat chuong trinh. Cam on ban da su dung!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 5);

    return 0;
}

