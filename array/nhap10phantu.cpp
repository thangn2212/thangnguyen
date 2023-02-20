#include<stdio.h>
#include<math.h>

int main(){
	int a[10];
	for(int i = 0; i <10; i ++){
		printf("Nhap vao phan tu thu  %d\n", i);
		scanf("%d", &a[i]);
	}
	for(int i = 0; i <10; i ++){
		printf("Nhap vao phan tu thu i = %d la : %d\n", i, a[i]);
	}
	for(int i = 0; i <10; i ++){
		if(a[i]%2==0){
			printf("Nhap vao phan tu thu  %d la so chan la : %d\n", i, a[i]);
		}
	}
	for(int i = 0; i <10; i ++){
		if(a[i]%2!=0){
			printf("Nhap vao phan tu thu  %d la so le la : %d\n", i, a[i]);
		}
	}
}
