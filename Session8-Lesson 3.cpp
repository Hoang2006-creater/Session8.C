#include <stdio.h>

int main() {
    int n;

    // Nhap so nguyen 
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    // Khoi tao mang 
    int arr[n][n];

    // Nhap gia tri 
    printf("Nhap cac phan tu  %d %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu o vi tri (%d,%d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // In ket qua 
    printf("Ma tran vuong  là:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

