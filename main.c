#include <stdio.h>
int countEqualDivisors(int n) {// ������� ��� ���������� ������� ����� ������� ����� n
    int count = 0;  // ˳������� ����� �������
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;  // ���� ������ � ������� �� ������ ���, �������� ��������
        }
    }
    return count;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    printf("������ ���������� ����� n: ");
    scanf("%d", &n);
    int result = countEqualDivisors(n);
    printf("ʳ������ ����� ������� ����� %d: %d\n", n, result);
    return 0;
}
