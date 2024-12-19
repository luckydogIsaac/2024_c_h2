#include <stdio.h>

int findMin(int a, int b, int c, int d) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    return min;
}

int main() {
    int num1, num2, num3, num4;

    printf("請輸入四個整數：\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int minNum = findMin(num1, num2, num3, num4);
    printf("最小的數是：%d\n", minNum);

    return 0;
}
