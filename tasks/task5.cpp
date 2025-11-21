#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float P, a;

    int n;

    cout << "Введите действительное число a=_\b":
    cin >> a;
    cout << "Введите натуральное число a=_\b":
    cin >> n;


    P = 1 * a;

    for (int i = 1; i <= n; i++)
    {
        P *= (a - i * n);
    }

    cout << "P = " << P << endl;
}