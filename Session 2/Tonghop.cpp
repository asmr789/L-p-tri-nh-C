#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    float s;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);

    s = ((pow(a, 2) + sqrt(pow(b, 2) + 4 * a * c)) / (2 * a)) - (pow(b, 3) / pow(c, 2))+ sqrt(abs(a - b));

    printf("s la: %f\n", s);

    return 0;
}
