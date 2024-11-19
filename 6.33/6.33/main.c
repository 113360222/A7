#include <stdio.h>

// ���j��{�G���j�M���禡
int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        // �p�G�d��L�ġA��ܥ����
        return -1;
    }

    int mid = (low + high) / 2; // �p�⤤������

    if (array[mid] == key) {
        // �p�G�����ȵ���j�M�ȡA��^����
        return mid;
    }
    else if (array[mid] > key) {
        // �p�G�����Ȥj��j�M�ȡA�V���j�M
        return binarySearch(array, low, mid - 1, key);
    }
    else {
        // �p�G�����Ȥp��j�M�ȡA�V�k�j�M
        return binarySearch(array, mid + 1, high, key);
    }
}

int main() {
    // ���եΪ��ƧǼƲ�
    int data[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int size = sizeof(data) / sizeof(data[0]);

    int key; // �n�j�M����
    printf("�п�J�n�j�M���ƭ�: ");
    scanf("%d", &key);

    // �I�s���j�G���j�M�禡
    int result = binarySearch(data, 0, size - 1, key);

    if (result != -1) {
        printf("���ƭ� %d�A���ެ� %d�C\n", key, result);
    }
    else {
        printf("�ƭ� %d ���b�Ʋդ����C\n", key);
    }

    return 0;
}