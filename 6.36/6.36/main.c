#include <stdio.h>

// ���j�禡�G�q�᩹�e�L�X�r��
void stringReverse(const char* str) {
    if (*str == '\0') {
        // ���j��������G�J��r�굲���Ÿ�
        return;
    }
    // ���j�եΡA���B�z�U�@�Ӧr��
    stringReverse(str + 1);
    // �A��X��e�r��
    putchar(*str);
}

int main() {
    char input[100]; // �Ω��x�s��J���r��

    printf("�п�J�@�Ӧr��: ");
    fgets(input, sizeof(input), stdin); // Ū���r��A�]�t�ťզr��

    printf("�ϦV�r�ꬰ: ");
    stringReverse(input); // �I�s���j�禡
    printf("\n");

    return 0;
}