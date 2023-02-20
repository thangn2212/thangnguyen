#include<stdio.h>
int main(){
	int arr[3][5];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0; j<5; j++){
			printf("Nhap vao gia tri phan tu i %d, j %d\n", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i<3;i++){
		for(j=0; j<5; j++){
			printf("Phan tu gia tri thu i %d, j %d là : %d\n", i+1, j+1, arr[i][j]);
		}
	}
	return 0;	
}
