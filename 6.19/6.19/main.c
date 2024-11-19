#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int results[13] = { 0 }; // 用於記錄點數2到12的次數，忽略索引0和1
    int totalRolls = 36000; // 模擬擲骰子總次數
    int die1, die2, sum;

    // 初始化隨機數生成器
    srand(time(NULL));

    // 模擬擲骰子
    for (int i = 0; i < totalRolls; i++) {
        die1 = rand() % 6 + 1; // 隨機生成1到6的數字
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        results[sum]++;
    }

    // 輸出結果
    printf("點數\t次數\t機率(%%)\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t%.2f%%\n", i, results[i], (results[i] / (double)totalRolls) * 100);
    }

    // 判斷7點出現次數是否接近1/6
    printf("\n7點出現次數：%d\n", results[7]);
    printf("理論值應接近：%.2f%%\n", (1.0 / 6.0) * 100);

    return 0;
}