#include <stdio.h>


int findGCD(int a, int b) { // Знаходимо найбільший спільний дільник
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int findLCM(int arr[], int n) { // Знаходимо найменше спільне кратне
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
    printf("Введіть кількість чисел: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Введіть %d натуральних чисел, розділені пробілом: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int lcm = findLCM(numbers, n);

    printf("Найменше спільне кратне: %d\n", lcm);

    return 0;
}
