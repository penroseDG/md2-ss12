#include <stdio.h>
int main(){
    int a, b, c;
    printf("Nhap vao ba so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    int product1 = a * b;
    int quotient1 = b / a;
    int product2 = b * c;
    int quotient2 = b / c;
    int product3 = a * c;
    int quotient3 = a / c;
    printf("Tich va thuong cua cac cap so la:\n");
    printf("Tich 1: %d, Thuong 1: %d khong chia het cho %d\n", product1,b,a,quotient1);
    printf("Tich 2: %d, Thuong 2: %d\n", product2,quotient2);
    printf("Tich 3: %d, Thuong 3: %d\n", product3, quotient3);
    return 0;
}
