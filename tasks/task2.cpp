#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float x,y,x0,y0,r,R;
    x0 = 0;
    y0 = 2;
    r = 3;
    R = 5;

    cout << "Введите x=_\b";
    cin >> x;
    cout << "Введите y=_\b";
    cin >> y;

    if (pow((x - x0),2) + pow((y - y0),2) <= R*R && pow((x - x0),2) + pow((y - y0),2) >= r*r)
    {
        if (x > 0 && y < 0)
        {
            cout << "false\n";
        }
        else
        {
            cout << "true\n";
        }
    }
    else{
        cout << "false\n";
    }
}