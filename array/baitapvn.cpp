#include<stdio.h>
#include<string.h>
void input(char a[n][m]);
void convert2_1(char a[][], int n, int m);
void 

int main(){
	char a[n][m]; // n se la so chuoi con m se la do dai cua chuoi
	int n, m;
	
	
	
	
	return 0;
}
void input(char a[n][m], int n, int m){
	do{
		printf("Nhap vao n : ");
		scanf("%d", &n);
		printf("Nhap vao m : ");
		scanf("%d", &m);
		
	}while(n < 0 || m <0);
	
	for(int i=0;i< n;i++){
		for(j=0; j < m; j++){
			printf("Nhap vao gia tri phan tu i %d, j %d\n", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
}
void convert2_1(char a[][], int n, int m){
	for(int i =0; i < n; i++){
		for(int j = 0;j < m; j++){
			a[i*n+j][j];	
		}
	}
	
}
