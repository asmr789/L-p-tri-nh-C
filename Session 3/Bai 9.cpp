#include <stdio.h>

int main() {
    int n;
    printf("Nhap n > 1 : ");
    scanf("%d", &n);

    float a = (1.0 / ((n - 1) * n)) + (1.0 / (n * (n + 1))) + (1.0 / ((n + 1) * (n + 2)));

    printf("A la : %.5f\n", a);  // In với 5 chữ số thập phân
    return 0;
}
