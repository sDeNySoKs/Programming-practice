#include <stdio.h>
#include <math.h>

int countIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {// Функція для обчислення кількості точок перетину двох колів

    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));// Обчислюємо відстань між центрами колів

    if (distance > r1 + r2) {// Кола не перетинаються
        return 0;
    } else if (distance == r1 + r2) {// Кола торкаються зовнішньо в одній точці
        return 1;
    } else if (distance < fabs(r1 - r2)) {// Одне коло міститься всередині іншого
        return 0;
    } else if (distance == fabs(r1 - r2)) {// Кола торкаються внутрішньо в одній точці
        return 1;
    } else {// Кола перетинаються у двох точках
        return 2;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x1, y1, r1, x2, y2, r2;

    printf("Введіть координати центра першого кола (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Введіть радіус першого кола (r1): ");
    scanf("%d", &r1);

    printf("Введіть координати центра другого кола (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Введіть радіус другого кола (r2): ");
    scanf("%d", &r2);

    int intersectionPoints = countIntersectionPoints(x1, y1, r1, x2, y2, r2);

    printf("Кількість точок перетину: %d\n", intersectionPoints);

    return 0;
}
