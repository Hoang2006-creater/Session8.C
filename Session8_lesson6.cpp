#include <stdio.h>

int main() {
    // Khai bao va gan gia tri 
    int arr[3][3] = {{1, 2, 3}, {5, 6, 7},{9, 10, 11}};
    
    int sum = 0;
    printf("Cac phan tu trong duong cheo la :\n");
    // In cac phan tu trong duong cheo 
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][i]);  
        sum += arr[i][i];  
    }
    // In ket qua 
    printf("Tong cac gia tri tren duong treo la : %d\n", sum);
    return 0;
}

