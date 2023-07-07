#include <stdio.h>
#include <string.h>

int factorial(int n) {// ������� ��� ���������� ��������� �����
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int countAnagrams(char word[]) {// ������� ��� ���������� ������� �������
    int length = strlen(word);
    int count[26] = {0}; // ����� ��� ��������� ������� ����� �����

    for (int i = 0; i < length; i++) {
        count[word[i] - 'A']++;
    }

    int denominator = 1;// ���������� ������� ������� �� ��������
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1) {
            denominator *= factorial(count[i]);
        }
    }

    int totalAnagrams = factorial(length) / denominator;
    return totalAnagrams;
}

int main() {
    ������HhSetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char word[15];

    printf("������ �����: ");
    scanf("%s", word);

    int anagramCount = countAnagrams(word);

    printf("ʳ������ �������: %d\n", anagramCount);

    return 0;
}
