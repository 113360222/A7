#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int results[13] = { 0 }; // �Ω�O���I��2��12�����ơA��������0�M1
    int totalRolls = 36000; // �����Y��l�`����
    int die1, die2, sum;

    // ��l���H���ƥͦ���
    srand(time(NULL));

    // �����Y��l
    for (int i = 0; i < totalRolls; i++) {
        die1 = rand() % 6 + 1; // �H���ͦ�1��6���Ʀr
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        results[sum]++;
    }

    // ��X���G
    printf("�I��\t����\t���v(%%)\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t%.2f%%\n", i, results[i], (results[i] / (double)totalRolls) * 100);
    }

    // �P�_7�I�X�{���ƬO�_����1/6
    printf("\n7�I�X�{���ơG%d\n", results[7]);
    printf("�z�׭�������G%.2f%%\n", (1.0 / 6.0) * 100);

    return 0;
}