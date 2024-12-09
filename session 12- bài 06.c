#include <stdio.h>
void kiemTraSoHoanHao(int n) {
    if (n <= 1) {
        printf("%d khong phai la so hoan hao.\n", n);
        return;
    }
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai la so hoan hao.\n", n);
    }
}
void kiemTraHaiSoHoanHao() {
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    kiemTraSoHoanHao(num1);
    kiemTraSoHoanHao(num2);
}
int main() {
    kiemTraHaiSoHoanHao();
    return 0;
}
