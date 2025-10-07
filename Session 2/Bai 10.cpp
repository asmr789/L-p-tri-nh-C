#include <stdio.h>
#include <math.h>

int main() {
    int a =3;
    int b =4;
    int c =2;

    float S = sqrt(pow(a, 2) + pow(b, 2)) / (c + 1)   +   (a * b) / c    -    sqrt(abs(a - b) + pow(c, 2));

    printf("S: %.2f\n", S);

    return 0;
}
