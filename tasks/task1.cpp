#include <iostream>
#include <math>
#define M_PI 3.14159265358979323846
using namespace std;
int main(){
    float x,y;

    cout << "Введите x=_\b";
    cin >> x;
    cout << "Введите y=_\b";
    cin >> y;

    x = x * M_PI/180;
    y = y * M_PI/180;


    float z1 = cos(x)*cos(x)*cos(x)*cos(x) + sin(y)*sin(y) + (1/4)*sin(2*x)*sin(2*x) - 1;
    float z2 = sin(y + x) * cos(y-x);
    cout << "z1 = " << z1 << "\n";
    cout << "z2 = " << z2 << "\n";



}