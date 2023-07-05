#include <stdio.h>
int countEqualDivisors(int n) {// Функція для обчислення кількості рівних дільників числа n
    int count = 0;  // Лічильник рівних дільників
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;  // Якщо частка і залишок від ділення рівні, збільшуємо лічильник
        }
    }
    return count;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    int result = countEqualDivisors(n);
    printf("Кількість рівних дільників числа %d: %d\n", n, result);
    return 0;
}
