#include <stdio.h>
#include <string.h>

int factorial(int n) {// Функція для обчислення факторіалу числа
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int countAnagrams(char word[]) {// Функція для обчислення кількості анаграм
    int length = strlen(word);
    int count[26] = {0}; // Масив для підрахунку кількості кожної букви

    for (int i = 0; i < length; i++) {
        count[word[i] - 'A']++;
    }

    int denominator = 1;// Обчислюємо кількість анаграм за формулою
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1) {
            denominator *= factorial(count[i]);
        }
    }

    int totalAnagrams = factorial(length) / denominator;
    return totalAnagrams;
}

int main() {
    РРРрррHhSetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char word[15];

    printf("Введіть слово: ");
    scanf("%s", word);

    int anagramCount = countAnagrams(word);

    printf("Кількість анаграм: %d\n", anagramCount);

    return 0;
}
