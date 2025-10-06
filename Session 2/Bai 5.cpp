#include <stdio.h>

int main(){
	int a,b;
	float c;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%f",&c);
	int sum = a + b + c;
	printf("%d\n",sum);
	float sum1 = a + b + c;
	printf("%.2f\n",sum1);
	return 0;
}