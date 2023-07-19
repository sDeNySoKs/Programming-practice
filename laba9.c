#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    // Визначення різниці між x і y
    int diff = abs(y - x);

    // Якщо різниця рівна 0, повертаємо 0
    if (diff == 0)
        return 0;

    // Ініціалізація змінних
    int steps = 1; // початковий крок 1
    int prevStep = 1;
    int currStep = 1;

    // Пошук мінімальної кількості кроків
    while (diff > currStep) {
        int temp = currStep;
        currStep += prevStep; // обчислюємо новий крок
        prevStep = temp;
        steps++;
    }

    return steps;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y;
    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення y: ");
    scanf("%d", &y);

    int result = minSteps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);

    return 0;
}
