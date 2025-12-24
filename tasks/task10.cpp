#include <iostream>
#include <cstring>

using namespace std;

void I_TO_B(int n, char s[], int b) {
    // Проверка допустимости основания
    if (b < 2 || b > 36) {
        strcpy(s, "Некорректное основание, только 2-36");
        return;
    }

    // Обработка нуля
    if (n == 0) {
        s[0] = '0';
        s[1] = '\0';
        return;
    }

    // Определение знака
    bool isNegative = false;
    if (n < 0) {
        isNegative = true;
        n = -n; // Работаем с положительным числом
    }

    const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char temp[33]; // Временный массив для цифр в обратном порядке
    int i = 0;

    // Преобразование числа в обратном порядке
    while (n > 0) {
        int remainder = n % b;
        temp[i++] = digits[remainder];
        n /= b;
    }

    // Добавление знака минус, если нужно
    int pos = 0;
    if (isNegative) {
        s[pos++] = '-';
    }

    // разворот
    for (int j = i - 1; j >= 0; j--) {
        s[pos++] = temp[j];
    }
    s[pos] = '\0';
}

int main() {
    char result[100];
    
    cout << "Тест 1: 42 в двоичной системе: ";
    I_TO_B(42, result, 2);
    cout << result << endl;
    
    cout << "Тест 2: 255 в шестнадцатеричной системе: ";
    I_TO_B(255, result, 16);
    cout << result << endl;
    
    cout << "Тест 3: -123 в десятичной системе: ";
    I_TO_B(-123, result, 10);
    cout << result << endl;
    
    cout << "Тест 4: 0 в восьмеричной системе: ";
    I_TO_B(0, result, 8);
    cout << result << endl;
    
    cout << "Тест 5: 1000 в системе с основанием 20: ";
    I_TO_B(1000, result, 20);
    cout << result << endl;
    
    cout << "Тест 6: 123456 в системе с основанием 36: ";
    I_TO_B(123456, result, 36);
    cout << result << endl;
    
    cout << "Тест 7: Некорректное основание: ";
    I_TO_B(10, result, 1);
    cout << result << endl;
    
    return 0;
}