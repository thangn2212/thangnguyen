#include<stdio.h>
#include<math.h>

void giaiptbac1(float a, float b);
void giaiptbac2(float a, float b, float c);
void swap(int &a, int &b);
void sapxeptang(int x[], int n);
void sapxepgiam(int x[], int n);
void printMang(int x[], int n);

int main(){
	// giai phuong trinh bac 1 va bac 2
	int n;
	float a, b, c;
	int e[100], d;
	
	printf("Nhap 1 de giai phuong trinh bac 1 so");
	printf("\nNhap 2 de giai phuong trinh bac 2 so");
	printf("\nNhap 3 de sap xep mang tang dan");
	printf("\nNhap 4 de sap xep mang giam dan");
	
	do{

		printf("\nNhap vào so n(1-4) = ");
		scanf("%d", &n);
		switch(n){
			case 1:
				printf("\nGiai phuong trinh bac 1");
				printf("\nNhap vao a = ");
				scanf("%f", &a);
				printf("\nNhap vao b = ");
				scanf("%f", &b);
				printf("\n");
				giaiptbac1(a, b);
				printf("\n");
				break;
			case 2:
				printf("\nGiai phuong trinh bac 2");
				printf("\nNhap vao a = ");
				scanf("%f", &a);
				printf("\nNhap vao b = ");
				scanf("%f", &b);
				printf("\nNhap vao c = ");
				scanf("%f", &c);
				printf("\n");
				giaiptbac2(a, b, c);
				printf("\n");
				break;
			case 3:
				do{
					printf("\nNhap so luong phan tu trong mang 0< d <= 100) : ");
					scanf("%d", &d);
				}while(d > 100 || d <0);
				
				for( int i = 0 ; i < d; i++){
					printf("e[%d] = ", i);
					scanf("%d", &e[i]);
				}
				printf("\nMang tang dan : ");
				sapxeptang(e, d);
				printMang(e, d);
				printf("\n");
				break;
				
			case 4:
				do{
					printf("\nNhap so luong phan tu trong mang 9 0< d <= 100) : ");
					scanf("%d", &d);
				}while(d > 100 || d <0);
				
				for( int i = 0 ; i < d; i++){
					printf("e[%d] = ", i);
					scanf("%d", &e[i]);
				}
				printf("\nMang giam dan : ");
				sapxepgiam (e, d);
				printMang(e, d);
				printf("\n");
				break;
				
			default:
				printf("\nNhap lai so n!\n");
				break;	
		}	
		
	}while(n != 1 || n != 2 || n != 3 || n != 4);
		
	return 0;
}
void giaiptbac1(float a, float b){
	if(a == 0){
		if(b == 0){
			printf("Phuong trinh bac 1 vo so nghiem");
		}else{
			printf("Phuong trinh bac 1 vo nghiem");
		}
	}else{
		float x = -b/a;
		printf("Nghiem cua phuong trinh bac 1 la x: %f", x);
	}
}
void giaiptbac2(float a, float b, float c){
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Phuong trinh bac 2 vo so nghiem");
			}else{
				printf("Phuong trinh bac 2 vo nghiem");
			}
		}else{
		giaiptbac1( b, c);
		}	
	}else{
		float delta = b*b - 4*a*c;
		if(delta < 0){
			printf("Phuong trinh bac 2 vo nghiem");
		}else{
			float x1 = ((-b+sqrt(delta))/2*a);
			float x2 = ((-b-sqrt(delta))/2*a);
			printf("Nghiem cua phuong trinh la x1 = %.2f , x2 = %.2f ",
			x1, x2);
		}
	}
}
void swap(int &a, int &b){
	int tam = a;
	a = b;
	b = tam;
}

void sapxeptang(int x[], int n){
	for(int i = 0; i< n-1; i++){
		int nhonhat = i;
		for(int j = i+1; j < n; j++){
			if(x[j]<x[nhonhat])
				nhonhat = j;
		}
		swap(x[i],x[nhonhat]);
	}

}
void sapxepgiam(int x[], int n){
	for(int i = 0; i< n-1; i++){
		int lonnhat = i;
		for(int j = i+1; j < n; j++){
			if(x[j]>x[lonnhat]){
				lonnhat = j;
			}
		}
		swap(x[i],x[lonnhat]);
	}
}
void printMang(int x[], int n){
	for( int  i =0; i<n; i++){
		printf("%d ", x[i]);
	}
}
