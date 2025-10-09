#include <stdio.h>
#include<math.h>

int main() {
    int a,b;
    printf("Nhap a : ");
    scanf("%d", &a);
    printf("Nhap b : ");
    scanf("%d", &b);
    float s = sqrt(a + sqrt(b+1)) + sqrt(b +sqrt(pow(a,2)+pow(b,2)));
    
    printf("S la : %.2f",s);
    
    return 0;
}
