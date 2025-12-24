#include <iostream>
#include <locale>
#include <cmath>

#define M_PI 3.14159265358979323846
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    float x;
    float x2;

    do {
        cout << "Ввести x:_\b";
        cin >> x;
        x2 = fabs(x);
        if (x2 <= 1) {
            cout << "Вне заданного промежутка\n";
        }

    } while (x2 <= 1);

    double t = 0.1;    
    double sum = M_PI/2;
    int n = 1;

    double x1 = x;  

    
    while (fabs(t) > 0.0000001) {
        t = (1 / (n *(-x1)));

        sum += t;
        x1 *= -(x * x);
        n += 2;
        cout << t << endl;
    }

    cout << "Сумма ряда = " << sum << endl;

    return 0;
}
