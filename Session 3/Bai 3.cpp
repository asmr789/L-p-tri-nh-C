#include <stdio.h>
#define PI 3.14

int main () {
    int radius;
    printf("Nhap ban kinh: ");
    scanf("%d", &radius);
    float area = PI * radius * radius;
    printf("Dien tich: %.2f\n", area);
    float perimeter = 2 * PI * radius;
	printf("Chu vi: %.2f\n", perimeter);
    return 0;
}