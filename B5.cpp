#include<stdio.h>
int main(){
	/*
	int j, i;
	for( i = 0, j = 0; i<=5; i++, j= j + 2){
		printf("Helloworld\n");
		if(i == 5){
			printf("Gia tri cua j = %d", j);
			break;
		}
	}
	*/
	/*
	int i , j , h, k;
	printf("Nhap vao chieu cao cua tam giac can ");
	scanf("%d", &h);
	if(h > 0){
		for( i = 0; i <= h; i++){ //i là dòng thu n 
			for( j = 0; j < h - i ; j++){ // j la so khoang trong moi dong can in
				printf("  "); 
			}
			for( k = 0; k < 2*i - 1; k++){
				printf("* ");
			}
			printf("\n");
		}
	}else{
		printf("chieu cao cua tam giac phai lon hon 0");
	}
	*/
	/*
	int a, i, j;
	printf("Nhap chieu dai canh hinh vuong ");
	scanf("%d", &a);
	if(a > 0){
		for(i = 1; i<=a; i++){
			for(j = 1; j<=a; j++){
				printf("* ");
			}
			printf("\n");
		}
	}else{
		printf("chieu cao phai lon hon 0");
	}
	*/

	int count = 1;
	while(count <= 10){
		printf("hello tn \n");
		count ++;
		if(count == 5){
//			break;
			continue;
		}
	};
	
	/*
	int choice;
	
	do{
		printf("Vui long nhap so trong khoang 1-3\n");
		scanf("%d", &choice);
	}while(choice < 1 || choice > 3);
	*/
	
	
	return 0;
}
