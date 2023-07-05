#include <stdio.h>


int countNumbers(int r) {// Обчислення кількості чисел із розрядами
    if (r <= 0)
        return 0;

    int count = 1;  // Лічильник одним числом

    for (int i = 1; i < r; i++) {
        count *= 2;  // Кожен наступний розряд може мати дві можливі цифри: 5 або 9
    }

    return count;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int r;
    printf("Введіть кількість розрядів: ");
    scanf("%d", &r);

    int result = countNumbers(r);

    printf("Кількість чисел із %d розрядів: %d\n", r, result);

    return 0;
}
