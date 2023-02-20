#include<stdio.h>
#include<math.h>
int main(){

float a, b, c, x1, x2, delta;

printf("Phuong tri cua phuong trinh ax^2 + bx + c = 0");
printf("\na =");
scanf("%f", &a);
printf("\nb =");
scanf("%f", &b);
printf("\nc =");
scanf("%f", &c);
	if(a == 0){

		if(b == 0){
			if(c == 0){	
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
		x1 = -c/b;
		printf(" x = %f", x1);	
		}
	}else{
	delta = b*b - 4*a*c;
		if( delta < 0){
			printf("Phuong trinh vo nghiem");
		}else if(delta == 0){
			x1 = x2 = -b/2*a;
			printf("x1 = x2 = %f", x1,x2);
		}else {
			x1 = ((-b + sqrt(delta))/2*a);
			x2 = ((-b - sqrt(delta))/2*a);
			printf("x1 = %f", x1);
			printf("x2 = %f", x2);
		}
	}
	return 0;
}

