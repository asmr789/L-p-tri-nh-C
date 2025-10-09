#include<stdio.h>

int main() {
	float math,eng,liter;
	printf("Nhap toan : ");
	scanf("%f",&math);
	printf("Nhap anh : ");
	scanf("%f",&eng);
	printf("Nhap van  : ");
	scanf("%f",&liter);
	
	float aver = (math + eng + liter) / 3;
	float sum = math + eng + liter;
	printf("Diem trung binh : %.2f\n",aver);
	printf("Tong diem : %.2f" , sum);
}