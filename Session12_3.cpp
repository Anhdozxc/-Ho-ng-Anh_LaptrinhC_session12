#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i; 
    }
    return result; 
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong tinh duoc giai thua cho so am!\n");
    } else {
        int result = factorial(n);
        printf("Giai thua cua %d la: %d\n", n, result);
    }

    return 0;
}

