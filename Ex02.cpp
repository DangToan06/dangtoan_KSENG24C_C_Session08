#include <stdio.h>

int main(){
	int arr[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int n;
	scanf("%d", &n);
	int check = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(n == arr[i][j]){
				printf("Phan tu o vi tri arr[%d][%d]");
				check = 1;
				break;
			}
		}
	}
	if(check == 0){
		printf("Phan tu khong ton tai trong mang");
	}
	return 0;
}

