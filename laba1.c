#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");// Додаємо українську мову

    int t1, t2, t3;
    float total_time;
    printf("Введіть три значення:\n");// Просимо ввести три значення
    scanf("%d %d %d", &t1, &t2, &t3);// Зчитуємо значення t1, t2, t3
    total_time = (float)(1.0 / t1) + (float)(1.0 / t2) + (float)(1.0 / t3);// Обчислюємо загальний час

    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", 1.0 / total_time);// Виводимо результат

    return 0;
}

