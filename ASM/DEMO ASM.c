#include <stdio.h>
#include <math.h>

void bai1() {
    int min, max;
    float tong = 0;
    int bienDem = 0;

    printf("Nhap gia tri min: ");
    scanf("%d", &min);
    printf("Nhap gia tri max: ");
    scanf("%d", &max);

    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
    }

    if (bienDem > 0) {
        printf("Trung binh cac so chan tu %d den %d: %.2f\n", min, max, tong / bienDem);
    } else {
        printf("Khong co so chan nao trong khoang.\n");
    }
}

void bai2() {
    int x;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("%d khong phai la so nguyen to.\n", x);
        return;
    }

    int laNguyenTo = 1;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            laNguyenTo = 0;
            break;
        }
    }

    if (laNguyenTo) printf("%d la so nguyen to.\n", x);
    else printf("%d khong phai la so nguyen to.\n", x);
}

void bai3() {
    int x;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);

    int root = sqrt(x);
    if (root * root == x) printf("%d la so chinh phuong.\n", x);
    else printf("%d khong phai so chinh phuong.\n", x);
}

int main() {
    int luaChon;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh trung binh so chan trong khoang\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("0. Thoat\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &luaChon);

        switch(luaChon) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (luaChon != 0);

    return 0;
}
