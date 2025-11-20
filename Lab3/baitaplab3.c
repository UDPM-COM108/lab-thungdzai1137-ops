#include <stdio.h>
#include <math.h>

void bai1() {
    float dtb;
    printf("Nhap diem trung binh (0 - 10): ");
    scanf("%f", &dtb);
    if (dtb >= 9)
        printf("Hoc luc: Xuat Sac\n");
    else if (dtb >= 8)
        printf("Hoc luc: Gioi\n");
    else if (dtb >= 6.5)
        printf("Hoc luc: Kha\n");
    else if (dtb >= 5)
        printf("Hoc luc: Trung Binh\n");
    else
        printf("Hoc luc: Yeu\n");
}
void bai2() {
    float a, b;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo so nghiem\n");
        else
            printf("Phuong trinh vo nghiem\n");
    } else {
        float x = -b / a;
        printf("Nghiem cua phuong trinh: x = %.2f\n", x);
    }
}
void bai3() {
    float a, b, c;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem hoac vo so nghiem tuy c\n");
        } else {
            float x = -c / b;
            printf("Phuong trinh bac nhat, nghiem x = %.2f\n", x);
        }
    } else {
        float delta = b*b - 4*a*c;

        if (delta < 0)
            printf("Phuong trinh vo nghiem\n");
        else if (delta == 0) {
            float x = -b / (2*a);
            printf("Phuong trinh co nghiem kep x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phuong trinh co 2 nghiem:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}
int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac 1\n");
        printf("3. Giai phuong trinh bac 2\n");
        printf("4. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch(choice) {
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
    } while(choice != 4);
    return 0;
}
