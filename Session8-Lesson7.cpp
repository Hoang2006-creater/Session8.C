#include<stdio.h>
int main(){
	int n;
	printf("Moi ban nhap so hang va so cot:"); 
	scanf("%d",&n);
	int array[n][n];
	printf("Moi ban nhap cac gia tri %d %d: \n",n, n);
	for(int i = 0; i <n; i++){
		for(int j = 0;j <n;j++){
			printf("Nhap gia tri o vi tri(%d, %d): ",i+1,j+1);
			scanf("%d",&array[i][j]); 
			 
		} 
	} 
	printf("Ma tran vuong la: \n"); 
	for(int i = 0; i <n; i++){
		for(int j = 0;j <n;j++){
			printf("%d ",array[i][j]);
			
}  
        printf("\n");
}
return 0; 	 
} 
