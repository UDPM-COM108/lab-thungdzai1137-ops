#include <stdio.h>
// ------------------ BÀI 1 ------------------
int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int min3(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}
// ------------------ BÀI 2 ------------------
int isLeapYear(int year) {
    if (year % 400 == 0) return 1;
    if (year % 4 == 0 && year % 100 != 0) return 1;
    return 0;
}

// ------------------ BÀI 3 ------------------
int check5and9(int x) {
    if (x % 5 == 0 && x % 9 == 0) return 1;
    return 0;
}

int main() {
    int choice;
    do {
        printf("\n----------- MENU -----------\n");
        printf("1. Tim min max trong 3 so\n");
        printf("2. Kiem tra nam nhuan\n");
        printf("3. Kiem tra so chia het cho 5 va 9\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int a, b, c;
            printf("Nhap 3 so: ");
            scanf("%d %d %d", &a, b, &c);
            printf("So lon nhat: %d\n", max3(a,b,c));
            printf("So nho nhat: %d\n", min3(a,b,c));
        }

        else if (choice == 2) {
            int year;
            printf("Nhap nam: ");
            scanf("%d", &year);
            if (isLeapYear(year))
                printf("%d la nam nhuan\n", year);
            else
                printf("%d khong phai nam nhuan\n", year);
        }

        else if (choice == 3) {
            int x;
            printf("Nhap so (1-1000): ");
            scanf("%d", &x);
            if (x < 1 || x > 1000) {
                printf("So ngoai pham vi\n");
            } else {
                if (check5and9(x))
                    printf("%d chia het cho ca 5 va 9\n", x);
                else
                    printf("%d KHONG chia het cho ca 5 va 9\n", x);
            }
        }

    } while (choice != 0);

    return 0;
}
