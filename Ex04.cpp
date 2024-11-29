#include <stdio.h>
#include <limits.h>

int main(){
	int n, m;
	printf("Nhap so hang cho mang: ");
	scanf("%d", &n);
	printf("Nhap so cot cho mang: ");
	scanf("%d", &m);
	
	int arr[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	int max = INT_MIN;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}
	printf("Gia tri lon nhat trong mang tren la: %d", max);
	
	

	return 0;
}

