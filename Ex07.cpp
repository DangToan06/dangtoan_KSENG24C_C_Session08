#include <stdio.h>

int main(){
	int n, m;
	printf("Nhap so hang cua mang: ");
	scanf("%d", &n);
	printf("Nhap so cot cua mang: ");
	scanf("%d", &m);
	
	while(n != m){
		printf("Hang va cot phai bang nhau hay nhap lai\n");
		printf("Nhap lai hang cua ban: ");
		scanf("%d", &n);
		printf("Nhap lai cot cu ban: ");
		scanf("%d", &m);
	}
	
	int arr[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("Nhap phan thu thu a[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}	
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == j){
				printf("%d", arr[i][j]);
				sum += arr[i][j];
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nTong gia tri duong cheo chinh la: %d", sum);
	
	

	return 0;
}

