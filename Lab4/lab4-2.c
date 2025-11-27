#include <stdio.h>
#include <math.h>

// ================= BAI 1 =================
void bai1() {
    int min, max, i;
    float tong = 0, biendem = 0, trungBinh = 0;
    printf("Nhap gia tri min: ");
    scanf("%d", &min);
    printf("Nhap gia tri max: ");
    scanf("%d", &max);
    i = min;
    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            biendem++;
        }
        i++;
    }

    if (biendem == 0) {
        printf("Khong co so chan nao trong khoang nay!\n");
    } else {
        trungBinh = tong / biendem;
        printf("Trung binh cac so chia het cho 2: %.2f\n", trungBinh);
    }
}

// ================= BAI 2 =================
void bai2() {
    int x, i, count = 0;
    printf("Nhap x: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("%d khong phai so nguyen to\n", x);
        return;
    }

    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;
        }
    }

    if (count == 0)
        printf("%d la so nguyen to\n", x);
    else
        printf("%d khong phai so nguyen to\n", x);
}

// ================= BAI 3 =================
void bai3() {
    int x, i, found = 0;
    printf("Nhap x: ");
    scanf("%d", &x);

    if (x < 1) {
        printf("%d khong phai so chinh phuong\n", x);
        return;
    }

    for (i = 1; i <= x; i++) {
        if (i * i == x) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d la so chinh phuong\n", x);
    else
        printf("%d khong phai so chinh phuong\n", x);
}
// ================= MENU =================
int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh trung binh cac so chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Thoat\n");
        printf("Chon bai: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 4:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 4);

    return 0;
}
