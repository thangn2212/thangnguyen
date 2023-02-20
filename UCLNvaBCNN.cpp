#include<stdio.h>

int UCLN(int a, int b);
int BCNN(int a, int b);

int main(){
	int a , b;
	printf("Nhap vao 2 so a , b : \n");
	printf("\nNhap vao so a = ");
	scanf("%d", &a);
	printf("\nNhap vao so b = ");
	scanf("%d", &b);
	
	
	printf("UCLN cua %d và %d la : %d ", a , b , UCLN(a,b));
	printf("BCNN cua %d và %d la : %d ", a , b , BCNN(a,b));
		
}
int UCLN(int a, int b){
	if(b == 0){
		return a;
	}
	return UCLN(b, a%b );
}
int BCNN(int a, int b){
	return (a*b)/UCLN(a, b);
}
