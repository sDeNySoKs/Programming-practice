#include <stdio.h>


int countNumbers(int r) {// ���������� ������� ����� �� ���������
    if (r <= 0)
        return 0;

    int count = 1;  // ˳������� ����� ������

    for (int i = 1; i < r; i++) {
        count *= 2;  // ����� ��������� ������ ���� ���� �� ������ �����: 5 ��� 9
    }

    return count;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int r;
    printf("������ ������� �������: ");
    scanf("%d", &r);

    int result = countNumbers(r);

    printf("ʳ������ ����� �� %d �������: %d\n", r, result);

    return 0;
}
