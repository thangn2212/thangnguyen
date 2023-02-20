#include<stdio.h>
#include<string.h>
int main(){
	
	char str1[20];
	char str2[20];
	
/*	gets(str);
	puts(str);
	scanf("%s", str);
	printf("%s", str);
	
	printf("Nhap vao a : ");
*/	
	//Noi 2 func
	printf("Nhap vao chuoi 1: \n");
	scanf("%s", str1);
	printf("Nhap vao chuoi 2 : \n");
	scanf("%s", str2);
	printf("Chuoi truoc khi cong\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	strcat(str1,str2);
	printf("chuoi sau khi cong: %s\n", str1);
	// so sanh 2 func
	int a = strcmp(str1,str2);
	printf("Gia tri cua phep so sanh 2 chuoi :%d\n", a);
	// tim vi tri ky tu
	char c;
	getchar();
	c = getchar();
	char *p;
	p = strchr(str1,c);
	printf("Dia chi cua chuoi str1: %d\n", str1);
	printf("Dia chi  cua ky tu: %d\n", p);
	printf("Vi tri cua ky tu trong chuoi str1: %d\n", p+1-str1);
		
	// copy chuoi
	char str3[20];
	strcpy(str3,str1);
	printf("chuoi Str3 la: %s\n", str3);
	// leg tra ve do dai
	printf("Do dai cua chuoi str3: %d\n", strlen(str3));
	
	return 0;
}
