#include <stdio.h>


int calculateSum(int a, int b) {
    return a + b; 
}

int main() {
    int num1, num2;

    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &num2);

    int sum = calculateSum(num1, num2);
    printf("Tong cua hai so la: %d\n", sum);

    return 0;
}

