#include<stdio.h>

//void Nhapmatrix(int m[100][100], int x,int y);
//int tongmatrix(int m[100][100], int x,int y);

void Nhapmatrix(int m[100][100], int x, int y){
	do{	
		printf("Nhap vao ma tran vuong x va y voi x,y > 1: ");
		scanf("%d%d", &x, &y);		
	}while(x < 2 || y < 2 || x != y);	
	
	for(int i = 0; i < x; i++){	
		for(int j=0; j < y; j++){
			printf("m[%d][%d] = ", i, j);
			scanf("%d", &m[i][j]);	
		}
	}
}

int main(){
	int a[100][100], x, y;
	Nhapmatrix(a,x,y);
	int sum = 0;
	for(int i=0; i <x; i++){
		for(int j = 0; j < y; j++){
			if(i == j){
				 sum = sum + a[i][j];
			}
		}
	}
	printf("tong duong cheo cua ma tran = %d", sum);
	return 0;
}


