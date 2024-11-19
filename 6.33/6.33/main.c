#include <stdio.h>

// 遞迴實現二分搜尋的函式
int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        // 如果範圍無效，表示未找到
        return -1;
    }

    int mid = (low + high) / 2; // 計算中間索引

    if (array[mid] == key) {
        // 如果中間值等於搜尋值，返回索引
        return mid;
    }
    else if (array[mid] > key) {
        // 如果中間值大於搜尋值，向左搜尋
        return binarySearch(array, low, mid - 1, key);
    }
    else {
        // 如果中間值小於搜尋值，向右搜尋
        return binarySearch(array, mid + 1, high, key);
    }
}

int main() {
    // 測試用的排序數組
    int data[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int size = sizeof(data) / sizeof(data[0]);

    int key; // 要搜尋的值
    printf("請輸入要搜尋的數值: ");
    scanf("%d", &key);

    // 呼叫遞迴二分搜尋函式
    int result = binarySearch(data, 0, size - 1, key);

    if (result != -1) {
        printf("找到數值 %d，索引為 %d。\n", key, result);
    }
    else {
        printf("數值 %d 未在數組中找到。\n", key);
    }

    return 0;
}