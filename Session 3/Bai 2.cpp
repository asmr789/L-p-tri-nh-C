#include<stdio.h>

int main() {
	int Fahrenheit,Celsius;
	
	printf("Nhap celsius : ");
	scanf("%d",&Celsius);
	Fahrenheit = Celsius * 9/5 + 32;
	printf("Fahrenheit : %d",Fahrenheit);
	
	return 0;
}