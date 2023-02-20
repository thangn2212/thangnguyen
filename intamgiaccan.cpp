#include<stdio.h>


int main(){
	int n, i, j;
	printf("Nhap vao n(so hang) : ");
	scanf("%d", &n);
	for(i =1; i<= n; i++){
		for(j= 1; j<i; j++){
			printf(" ");
		}
		for(j=i; j <= n;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
