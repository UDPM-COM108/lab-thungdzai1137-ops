#include <stdio.h>
#include <math.h>

void bai1() {
    int min, max, i;
    float tong = 0, bienDem = 0, trungBinh = 0;
    printf("Nhap gia tri min: ");
    scanf("%d", &min);
    printf("Nhap gia tri max: ");
    scanf("%d", &max);
    i = min;
    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }
    if (bienDem > 0) {
        trungBinh = tong / bienDem;
        printf("Trung binh tong cac so chia het cho 2 tu %d den %d la: %.2f\n", min, max, trungBinh);
    } else {
        printf("Khong co so nao chia het cho 2 trong khoang tu %d den %d\n", min, max);
    }
}
void bai2() {
    int x, i, count = 0;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);
    if (x < 2) {
        printf("%d khong phai la so nguyen to\n", x);
        return;
    }
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;
        }
    }
    if (count == 0) {
        printf("%d la so nguyen to\n", x);
    } else {
        printf("%d khong phai la so nguyen to\n", x);
    }
}
void bai3() {
    int x, i, laChinhPhuong = 0;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);
    for (i = 1; i * i <= x; i++) {
        if (i * i == x) {
            laChinhPhuong = 1;
            break;
        }
    }
    if (laChinhPhuong) {
        printf("%d la so chinh phuong\n", x);
    } else {
        printf("%d khong phai la so chinh phuong\n", x);
    }
}
int main() {
    int luaChon;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh trung binh tong cac so chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("0. Thoat\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &luaChon);
        switch (luaChon) {
            case 1: bai1(); 
            break;
            case 2: bai2();
            break;
            case 3: bai3(); 
            break;
            case 0: printf("Tam biet!\n"); 
            break;
            default: printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (luaChon != 0);
    return 0;
}