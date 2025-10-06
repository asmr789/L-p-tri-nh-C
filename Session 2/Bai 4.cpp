#include <stdio.h>

int main(){
	int a,b;
	
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	
	int per = (a +b) *2;
	int area = a * b;
	printf("%d\n",per);
	printf("%d\n",area);
	return 0;
}