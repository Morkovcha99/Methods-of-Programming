#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;

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

    for (int i=0; i<n; i++)
    {   
        if (i < n/2)
        {
            for (int j=0;j<n;j++)
            {
                if (j<i+1 || j>n-i-2)
                {
                    matrix[i][j] = 1;
                }
                else{
                    matrix[i][j] = 0;
                }
            }
        }
        else
        {
            for (int j=0;j<n;j++)
            {
                if (j<n-i || j>i-1)
                {
                    matrix[i][j] = 1;
                }
                else{
                    matrix[i][j] = 0;
                }
            }
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

// 1 0 0 1
// 1 1 1 1  
// 1 1 1 1  
// 1 0 0 1 

// 1 0 0 0 1
// 1 1 0 1 1 
// 1 1 1 1 1
// 1 1 0 1 1
// 1 0 0 0 1

// 1 0 0 0 0 1
// 1 1 0 0 1 1
// 1 1 1 1 1 1
// 1 1 1 1 1 1
// 1 1 0 0 1 1
// 1 0 0 0 0 1