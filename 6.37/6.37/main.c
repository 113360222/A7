#include <stdio.h>

// 遞迴函數，找出陣列的最大值
int recursiveMaximum(int arr[], int size) {
    // 基底條件：若陣列只有一個元素，直接返回該元素
    if (size == 1) {
        return arr[0];
    }

    // 遞迴呼叫，找出子陣列的最大值
    int maxInRest = recursiveMaximum(arr, size - 1);

    // 返回當前元素和子陣列最大值中的較大者
    return (arr[size - 1] > maxInRest) ? arr[size - 1] : maxInRest;
}

int main() {
    int arr[] = { 3, 5, 7, 2, 8, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // 呼叫遞迴函數並輸出結果
    printf("陣列中的最大值為: %d\n", recursiveMaximum(arr, size));

    return 0;
}