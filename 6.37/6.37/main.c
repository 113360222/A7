#include <stdio.h>

// ���j��ơA��X�}�C���̤j��
int recursiveMaximum(int arr[], int size) {
    // �򩳱���G�Y�}�C�u���@�Ӥ����A������^�Ӥ���
    if (size == 1) {
        return arr[0];
    }

    // ���j�I�s�A��X�l�}�C���̤j��
    int maxInRest = recursiveMaximum(arr, size - 1);

    // ��^��e�����M�l�}�C�̤j�Ȥ������j��
    return (arr[size - 1] > maxInRest) ? arr[size - 1] : maxInRest;
}

int main() {
    int arr[] = { 3, 5, 7, 2, 8, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // �I�s���j��ƨÿ�X���G
    printf("�}�C�����̤j�Ȭ�: %d\n", recursiveMaximum(arr, size));

    return 0;
}