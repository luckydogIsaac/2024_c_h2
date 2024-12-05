#include <stdio.h>

int main() {
    int yourAge, friendAge;
    
    // 輸入你和你朋友的年齡
    printf("請輸入你的年齡: ");
    scanf("%d", &yourAge);
    printf("請輸入你朋友的年齡: ");
    scanf("%d", &friendAge);
    
    // 判斷誰的年齡最大並輸出
    if (yourAge > friendAge) {
        printf("你年齡最大，年齡是: %d\n", yourAge);
    } else if (friendAge > yourAge) {
        printf("你朋友的年齡最大，年齡是: %d\n", friendAge);
    } else {
        printf("你們的年齡相同，都是: %d歲\n", yourAge);
    }
    
    return 0;
}
