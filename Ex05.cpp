#include <stdio.h>

int main(){
	int n, m;
	printf("Nhap so hang: ");
	scanf("%d", &n);
	printf("Nhap so cot: ");
	scanf("%d", &m);
	
	int arr[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("Nhap phan tu arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
				sum += arr[i][j];
			}
		}
	}
	printf("%d", sum);
	return 0;
}
