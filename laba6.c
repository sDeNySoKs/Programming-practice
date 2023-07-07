#include <stdio.h>
#include <math.h>


double calculateVectorLength(int x1, int y1, int x2, int y2) {// ������� ��� ���������� ������� �������

    int dx = x2 - x1;// ���������� ������ ��������� �� �� x �� y
    int dy = y2 - y1;
    int sumOfSquares = dx * dx + dy * dy;// ���������� ������� ���� ������ ���������

    double length = sqrt(sumOfSquares);// ���������� ������� ������� �� �������� ����������� ������

    return length;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x1, y1, x2, y2;

    printf("������ ���������� ������� ������� (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("������ ���������� ���� ������� (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double length = calculateVectorLength(x1, y1, x2, y2);

    printf("������� �������: %.6f\n", length);

    return 0;
}
