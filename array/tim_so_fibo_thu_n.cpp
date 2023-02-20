#include<stdio.h>
#include<math.h>
#include<conio.h>

	
int main(){
	 int n;
	do{
		printf("\nNhap vao n (n>1) = ");
		scanf("%d", &n);
	}while( n < 1);
	int a[100];
	a[0] = 0;
	a[1] = 1;
	for(int i = 2; i<=n; i++){
		a[n] = a[i-1] + a[i-2];
	}
	printf("\n So Fibonacci thu %ld la %ld", n, a[n-1]);

	return 0;
}
