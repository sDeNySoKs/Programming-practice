#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");// ������ ��������� ����

    int t1, t2, t3;
    float total_time;
    printf("������ ��� ��������:\n");// ������� ������ ��� ��������
    scanf("%d %d %d", &t1, &t2, &t3);// ������� �������� t1, t2, t3
    total_time = (float)(1.0 / t1) + (float)(1.0 / t2) + (float)(1.0 / t3);// ���������� ��������� ���

    printf("���, ���������� ��� �'������ ������: %.2f �����\n", 1.0 / total_time);// �������� ���������

    return 0;
}

