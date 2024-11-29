#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d cua mang: ", i + 1);
		scanf("%d", &arr[i]);
	}
		
	int max = 0, number;
	for(int i = 0;i < n; i++){
		int count = 0;
		
		for(int j = 0; j < n; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		
		if(count > max){
			max = count;
			number = arr[i];
		}
	}
	printf("%d", number);

	return 0;
}

