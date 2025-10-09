#include<stdio.h>

int main() {
	float day,chieucao;
	printf("Nhap day : ");
	scanf("%f",&day);
	printf("Nhap chieucao : ");
	scanf("%f",&chieucao);

	float area = (day * chieucao) / 2;
	printf("Dien tich : %.2f\n",area);
	
	return 0;
}