#include <stdio.h>

int main() {
    // Khai bao mang 2 chieu 
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 6, 9}};
    int max = arr[0][0]; 
    // Duyet mang 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j]; 
            }
        }
    }

    // In ket qua 
    printf("Phan lon nhat trong mang la : %d\n", max);
    
    return 0;
}

