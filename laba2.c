#include <stdio.h>


int findGCD(int a, int b) { // ��������� ��������� ������� ������
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int findLCM(int arr[], int n) { // ��������� �������� ������ ������
    int lcm = arr[0];

    for (int i = 1; i < n; i++) {
        int gcd = findGCD(lcm, arr[i]);
        lcm = (lcm * arr[i]) / gcd;
    }

    return lcm;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    printf("������ ������� �����: ");
    scanf("%d", &n);

    int numbers[n];
    printf("������ %d ����������� �����, ������� �������: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int lcm = findLCM(numbers, n);

    printf("�������� ������ ������: %d\n", lcm);

    return 0;
}
