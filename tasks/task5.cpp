#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float P, a;
    bool input_check = true;
    int n;
    

    while (input_check)
    {
        cout << "Введите действительное число a=_\b":
        cin >> a;
        if (cin.fail())
        {
            cin.ignore();
            cin.clear();
            cout << "Нужно ДЕЙСТВИТЕЛЬНОЕ число.";
        }
        else
        {
            input_check = false;
        }
    }
    input_check = true;
    while (input_check)
    {
        cout << "Введите натуральное число n=_\b":
        cin >> n;
        if (cin.fail())
        {
            cin.ignore();
            cin.clear();
            cout << "Нужно ДЕЙСТВИТЕЛЬНОЕ число.";
        }
        else
        {
            input_check = false;
        }
    }


    P = 1 * a;

    for (int i = 1; i <= n; i++)
    {
        P *= (a - i * n);
    }

    cout << "P = " << P << endl;

    //#TODO: проверка готова, нужна правильная работа функции
}