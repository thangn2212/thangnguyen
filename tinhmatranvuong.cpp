#include<stdio.h>
#include<math.h>



//void Nhapmatrix(int m[100][100], int x,int y);
//int tongmatrix(int m[100][100], int x,int y);


void Nhapmatrix(int a[100][100], int x, int y){
	do{	
		printf("Nhap vao ma tran vuong x va y voi x = y > 1: ");
		scanf("%d%d", &x, &y);		
	}while(x < 2 || y < 2 || x != y);	
	
	
}
int tong(int a[100][100], int x, int y){
	int sum = 0;
	for(int i=0; i <x; i++){
		for(int j = 0; j < y; j++){
			if(i == j){
				 sum += a[i][j];
			}
		}
	}
	return sum; 
}
int main(){
	
	int a[100][100];
	int x=0, y=0;
	Nhapmatrix(a,x,y);
	printf("Tong duong cheo cua ma tran = %d", tong(a,x,y));
	
	return 0;
}


