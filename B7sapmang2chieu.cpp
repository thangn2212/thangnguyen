#include<stdio.h>

int a[100][100];
int x, y;
void nhapMatran(int m[100][100], int &x, int &y){
	do{
		printf("Nhap vao x va y: ");
		scanf("%d%d", &x, &y);		
	}while(x <= 0 || y <= 0);	
	for(int i = 0; i < x; i++){	
		for(int j=0; j < y; j++){
			printf("m[%d][%d] = ", i, j);
			scanf("%d", &m[i][j]);	
		}
	}
}
void xuatMatran(int m[100][100], int x, int y){ 
	printf("\nMang : \n");
	for(int i = 0 ; i<x ; i++){
		for(int j=0; j < y ; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	nhapMatran(a, x, y);
	xuatMatran(a, x, y);
	// 2d > 1d
	int b[x*y],i ,j;
	for( i = 0; i <x; i++){
		for( j = 0; j < y; j++){
			b[i*x + j] = a[i][j];
		}
	printf("mang 1 chieu : ");
	scanf("%d\t", &b[i*x + j]);
	}

}
