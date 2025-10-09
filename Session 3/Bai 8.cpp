#include <stdio.h>

int main() {
	int number = 1234;
	
	int a = number % 10; // 5
	int b = (number / 10) % 10; // 4 
	int c = (number / 100) % 10; // 3
	int d = (number / 1000) % 10; // 2
	
	int reverse = a * 1000 + b * 100 + c * 10 + d;
	
	printf(" %d",reverse);
	return 0;
}