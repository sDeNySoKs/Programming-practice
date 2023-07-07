#include <stdio.h>
#include <math.h>


double calculateVectorLength(int x1, int y1, int x2, int y2) {// Функція для обчислення довжини вектора

    int dx = x2 - x1;// Обчислюємо різницю координат по осі x та y
    int dy = y2 - y1;
    int sumOfSquares = dx * dx + dy * dy;// Обчислюємо квадрат суми різниць координат

    double length = sqrt(sumOfSquares);// Обчислюємо довжину вектора за формулою квадратного кореня

    return length;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x1, y1, x2, y2;

    printf("Введіть координати початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Введіть координати кінця вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double length = calculateVectorLength(x1, y1, x2, y2);

    printf("Довжина вектора: %.6f\n", length);

    return 0;
}
