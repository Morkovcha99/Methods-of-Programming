#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Введите порядок матрицы n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Порядок матрицы должен быть положительным числом!" << endl;
        return 1;
    }
    
    // Создание динамической матрицы
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    
    cout << "Введите элементы матрицы " << n << "x" << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Введите " << i+1 << " строчку через пробелы:_\b";
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nВведенная матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    bool isSymmetric = true;
    
    // Проходим только по элементам выше главной диагонали
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Если элемент выше диагонали не равен симметричному элементу ниже диагонали
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) break;
    }
    
    if (isSymmetric) {
        cout << "Матрица является симметричной относительно главной диагонали." << endl;
    } else {
        cout << "Матрица НЕ является симметричной относительно главной диагонали." << endl;
    }
    
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}