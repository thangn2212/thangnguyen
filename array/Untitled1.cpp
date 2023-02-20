#include <stdio.h>

int main()
{
	auto int a;
	register int b;
	static int c;
	printf("Nhap b:\n");
	scanf("%d",&b);
	printf("Gia tri cua a: %d\n",a);
	printf("Gia tri cua b: %d\n",b);
	printf("Gia tri cua c: %d\n",c);
	return 0;
}
