#include <stdio.h>

int printArray(int arr[], int size) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");
    return 0; 
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
    printArray(array, n);

    return 0;
}
