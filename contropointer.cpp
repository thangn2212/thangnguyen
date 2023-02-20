#include<stdio.h>
int main(){
	int arr[5];
	for(int i= 0; i< 5; i++){
		printf("%d \n", *(arr+i));//arr[i]
	}
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int (*p)[4];
	p = a;
	for(int i = 0; i <3; i++){
		for(int j = 0; j<4; j++){
			printf("Gia tri phan tu: %d\n",*(*(p+i) + j));
		}
	}
}
