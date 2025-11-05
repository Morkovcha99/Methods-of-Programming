#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main(){
    const int n = 5;
    int a[n] = {4, 2, 5, 1,3};
    for (int i = 0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 1; i < n; i++){
        for (int k = 0; k < n - i; k++){
            if (a[k] > a[k+1]){
                int tmp = a[k];
                a[k] = a[k + 1];
                a[k +1 ] = tmp;
            }
        }

    }
    for (int i = 0; i<n; i++)
        cout << a[i] << " ";
}