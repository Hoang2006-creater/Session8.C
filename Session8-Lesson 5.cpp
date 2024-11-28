#include <stdio.h>

int main() {
    // Khai bao mang 2 chieu 
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 6, 9}};
    // Duyet mang 
    int sum = 0;
    // Tinh tong cac phan tu  
    for (int i = 0; i < 2; i++) {
        sum += arr[0][i];  
        sum += arr[2][i];  
    }
    for (int i = 1; i < 2; i++) {
        sum += arr[i][0];  
        sum += arr[i][2]; 
    }
    // In ket qua 
    printf("Tong cac phan tu la : %d\n", sum);

    return 0;
}
