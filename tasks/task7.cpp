#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    //int* p = new int[n]
    // delete[] p
    // p = nullptr;

    //int** num = int* [n]
    // for (int i = 0; i < n; i++{
    // num[i] = new int[m];
    //}
    // по строчно удалять
    cout << "Введите какого порядка матрица =_\b";
    cin >> n;

    int matrix[n][n];

    for (int i=0; i<n; i++)
    {
        for (int j=0;j<n;j++)
        {
            matrix[i][j] = 0;
        }
    }
    for (int i=0; i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << "\n";
    }
    

}