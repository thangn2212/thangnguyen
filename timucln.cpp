#include<stdio.h>
#include<math.h>
int main(){
	int a , b, UCLN;
	printf(" a = ");
	scanf("%d", &a);
	printf(" b = ");
	scanf("%d", &b);
	
	if(a == 0 || b == 0){
		UCLN = a + b;
		printf("UCLN = %d", UCLN);
	}else{
		while(a != b){
			if(a > b){
				a = a -b;
			}else{
				b = b-a;
			}
		}
		UCLN = a;
	} 
	printf("UCLN = %d", UCLN);
	
}

