#include<stdio.h>
#include<math.h>


int main(){
	
	int n , factorial;
	float s ;
	 
	do{
		printf("\nNhap vao n (n>1) = ");
		scanf("%d", &n);
	}while(n<1);

	s = 1;
	factorial = 2 ;
	for(int i = 2; i <= n ; i++){	
		factorial = factorial * (i+1);
		s += (float)i/factorial;
	}
	printf("\nTong cua S(%d) = %.10f", n, s);
}

