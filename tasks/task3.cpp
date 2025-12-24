#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b,c;
    double xn, xk,dx, x, F;

    cout << "Введите a, b, c, x нач, x кон, dX=_\b";
    cin >> a >> b >> c >> xn >> xk >> dx;
    // a = 0; // 1 0 1 0 0.5
    // b = 0; // 2 1 2 0 2.5
    // c = 0; // -1 2 3 0 2.5
    // xn = 1; // -2 1 1 1 0.1
    // xk = 25; // 2 5 4 3 1.0
    // dx = 1; // 1 1 1 1 0.2
    bool showReal = ((int(a) ^ int(b)) & ~(int(a) | int(c))) != 0;


    printf("+---------+---------+\n");
    printf("|    x    |   F(x)  |\n");
    printf("+---------+---------+\n");
    for (double x = xn; x <= xk + 1e-9; x += dx)
    {
        bool error = false;
        if (c < 0 && fabs(c) > 1e-9)
        {
            F =  -(a*x*x);
        }
        else if (c > 0 && fabs(a) < 1e-9)
        {
            if (abs(c * x) < 1e-9)
            {
                error = true;
            }
            else
            {
                F = (a-x)/(c*x);
            }

        }
        else
        {
            if (fabs(c) < 1e-9)
            {
                error = true;
            }
            else
            {
                F = x/c;
            }
        }

        if (error) {
            printf("| %7.2f |  error  |\n", x);
        } else {
            if (showReal) {
                printf("| %7.2f | %7.2f |\n", x, F);
            } else {
                printf("| %7.2f | %7d |\n", x, int(F));
            }
        }

    }
    printf("+---------+---------+\n");

    return 0;
}