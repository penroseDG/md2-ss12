#include <stdio.h>
int main() {
    int a, b, c;
    printf("Nhap vao ba so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum1 = a + b;
    int diff1 = a - b;
    int sum2 = b + c;
    int diff2 = b - c;
    int sum3 = a + c;
    int diff3 = a - c;
    printf("Tong va hieu cua cac cap so la:\n");
    printf("Tong 1: %d, Hieu 1: %d\n", sum1, diff1);
    printf("Tong 2: %d, Hieu 2: %d\n", sum2, diff2);
    printf("Tong 3: %d, Hieu 3: %d\n", sum3, diff3);
    return 0;
}
