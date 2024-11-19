#include <stdio.h>

// 遞迴函式：從後往前印出字串
void stringReverse(const char* str) {
    if (*str == '\0') {
        // 遞迴結束條件：遇到字串結束符號
        return;
    }
    // 遞迴調用，先處理下一個字元
    stringReverse(str + 1);
    // 再輸出當前字元
    putchar(*str);
}

int main() {
    char input[100]; // 用於儲存輸入的字串

    printf("請輸入一個字串: ");
    fgets(input, sizeof(input), stdin); // 讀取字串，包含空白字元

    printf("反向字串為: ");
    stringReverse(input); // 呼叫遞迴函式
    printf("\n");

    return 0;
}