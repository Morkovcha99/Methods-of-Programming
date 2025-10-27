#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    float b = 12345.2345365345432;
    int a = 5;
    cout << a << endl;
    cout << b << endl;
    a = b;
    cout << a << endl;


}