#include <stdio.h>

int main() {
	int number = 1234;
	
	int a = number % 10; // 4
	int b = (number / 10) % 10; // 3
	int c = (number / 100) % 10; // 2
	int d = number / 1000; // 1
	
	int sum = a + b + c + d;
	printf("Tong : %d", sum);
	return 0;
}