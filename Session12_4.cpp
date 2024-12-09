#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int array[n]; 

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int max = findMax(array, n);
    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}



