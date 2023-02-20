#include<stdio.h>
int main(){
	int a ;
	float b;
	double c;
	char d ;
//	printf("\nNhap vao ky tu d la: ");//constant string
//	scanf("%c", &d);
	printf("Nhap vao gia tri a = ");
	scanf("%d", &a);
	//modifier thì la them tien to vao truoc dinh dang nhu %(.2)f
	printf("\nNhap vao gia tri b = ");
	scanf("%f", &b);
	printf("\nNhap vao gia tri c = ");
	scanf("%lf", &c);
		
	getchar(); // nhan ky tu enter tu tren xuong de co the nhap d
	printf("\nNhap vao ky tu d la: ");
	scanf("%c", &d);//neu de cuoi cung thi phim enter cung là 1 ký tu nên k the nhap d
}
