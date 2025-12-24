#include <iostream>
using namespace std;

int main() {
    double a, P;
    int n;
    
    cout << "Введите действительное число a: ";
    while (!(cin >> a)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Ошибка! Введите число (например: 2.5, -3, 0): ";
    }
    cin.ignore(10000, '\n');
    
    cout << "Введите натуральное число n: ";
    while (!(cin >> n) || n <= 0) {
        if (!cin) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Ошибка! Введите целое число: ";
        } else if (n <= 0) {
            cin.ignore(10000, '\n');
            cout << "Ошибка! Число должно быть положительным: ";
        }
    }
    
    P = a;
    for (int i = 1; i <= n; i++) {
        P *= (a - i * n);
    }
    
    cout << "Результат: P = " << P << endl;
    
    return 0;
}