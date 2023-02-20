#include<stdio.h>
#include<string.h>
#include<math.h>

void Nhapmang(int a[], int n);
void sum(int a[],int n);

int main(){
	int a[100];
	int n;
	Nhapmang(a, n);	
	sum(a,n);
	printf("Tong gia tri cua func la : %d", sum);
	return 0;
}
void Nhapmang(int a[], int n){
	do{
		printf("\nNhap so luong phan tu trong mang  0< n ) : ");		
		scanf("%d", &n);
	}while( n <0);
				
	for( int i = 0 ; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void sum(int a[],int n){
	int s = 0;
	for(int i = 0; i < n; i++){
		s += a[i];
	}
}
