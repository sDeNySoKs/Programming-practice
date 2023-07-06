#include <stdio.h>

// Функція для обчислення кількості допустимих послідовностей
int countSequences(int n) {
    int dp[n + 1]; // Масив для зберігання кількості послідовностей довжиною i
    const int MOD = 12345; 

    dp[0] = 1; 
    dp[1] = 2;
    dp[2] = 3; 
    
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD; // Загальний випадок
        if (i >= 4) {
            dp[i] = (dp[i] + dp[i - 3]) % MOD; // Додатковий випадок: додаємо dp[i-3]
        }
    }

    return dp[n]; 
}

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);
    int result = countSequences(n);
    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}





