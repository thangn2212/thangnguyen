#include<stdio.h>
int main(){
	int a = 10;
	if(a!=10){
		printf("Hello TBV");
	}else{
		printf("tbv");
	};
	int choice;
	printf("Nhap vao lua chon:(1-3)\n");
	scanf("%d", &choice);
	if(choice == 1){
		printf("lua chon cua ban la : %d", choice);
	}else if(choice == 2){
		printf("lua chon cua ban la : %d", choice);
	}else if(choice == 3){
		printf("lua chon cua ban la : %d", choice);
	}else{
		printf("lua chon sai, vui long chon tu (1-3)");
	}
	return 0;
}
