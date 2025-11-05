#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    const int n = 15;
    int a[n];// {4, 2, 5, 1,3};
    for (int i = 0; i<n; i++){
        a[i] = rand() % 1000;
        cout << endl;
        for (int i = 1; i < n - 1; i++){
            int indexmax = 0;
            for (int k = 1; k < n - i; k++)
                if (a[k] > a[indexmax])
                    indexmax = k;
            int tmp = a[indexmax];
            a[indexmax] = a[n-i-1];
            a[n-i-1] = tmp;
                
            }}
    for (int i = 0; i<n; i++)
        cout << a[i] << " ";
}