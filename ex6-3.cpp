#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int min;

    // 從鍵盤輸入四個數字
    printf("請輸入第一個數字: ");
    scanf("%d", &num1);
    printf("請輸入第二個數字: ");
    scanf("%d", &num2);
    printf("請輸入第三個數字: ");
    scanf("%d", &num3);
    printf("請輸入第四個數字: ");
    scanf("%d", &num4);

    // 假設第一個數字是最小的
    min = num1;

    // 比較找到最小的數字
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    if (num4 < min) {
        min = num4;
    }

    // 顯示最小的數字
    printf("最小的數字是: %d\n", min);

    return 0;
}
