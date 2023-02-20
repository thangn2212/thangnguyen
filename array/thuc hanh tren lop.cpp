#include<stdio.h>
int main(){

int a, b;
float x;

printf("Phuong tri cua phuong trinh ax + b = 0");
printf("\na =");
scanf("%d", &a);
printf("\nb =");
scanf("%d", &b);
if(a == b == 0){
	printf("Phuong trinh vo so nghiem");
}else if(b != a == 0){
	printf("Phuong trinh vo nghiem ");
}else{
	x =-b/a;
	printf("x = %.2f", x);
}
return 0;
}
