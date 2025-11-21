#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b,c,F;
    double xn, xk,dx, x;

    cout << "Введите a, b, c, x нач, x кон, dX=_\b";
    cin >> a >> b >> c >> xn >> xk >> dx;
    //a = 1;
    //b = 2;
    //c = 3;
    //xn = 1;
    //xk = 5;
    //dx = 1;
    // cout << "Введите b=_\b";
    // cin >> b;
    // cout << "Введите c=_\b";
    // cin >> c;
    // cout << "Введите x нач=_\b";
    // cin >> xn;
    // cout << "Введите x кон=_\b";
    // cin >> xk;
    // cout << "Введите dX=_\b";
    // cin >> dx;
    // и - &, или - |

    cout << "|   x    |  F(x) |\n";
    for (double x = xn; x <= xk; x += dx)
    {
        if (c < 0 && c != 0)
        {
            F =  -(a*x*x);
        }
        else if (c > 0 && a == 0)
        {
            if (c == 0 || x == 0)
            {
                cout << "Ошибка! Деление на ноль.";
            }
            else
            {
                F = (a-x)/(c*x);
                if (((int(a) ^ int(b)) & !(int(a) | int(c))) != 0)
                {
                    printf("|  %.2f  |   %.2f   |\n", x, F);
                }
                else
                {
                    printf("|  %.2f  |   %d   |\n", x, int(F));
                }
            }

        }
        else
        {
            if (c == 0)
            {
                cout << "Ошибка! Деление на ноль.";
            }
            else
            {
                F = x/c;
                if (((int(a) ^ int(b)) & !(int(a) | int(c))) != 0)
                {
                    printf("|  %.2f  |   %.2f   |\n", x, F);
                }
                else
                {
                    printf("|  %.2f  |   %d   |\n", x, int(F));
                }
            }
        }

        if (((int(a) ^ int(b)) & !(int(a) | int(c))) != 0)
        {
            printf("|  %.2f  |   %.2f   |\n", x, F);
        }
        else
        {
            printf("|  %.2f  |   %d   |\n", x, int(F));
        }

    }
}