#include <iostream>

using namespace std;

int findTrace(int matrix[][20], int n) {
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

void printMatrix(int matrix[][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void enterMatrix(int matrixkek[][20], int n) {
        cout << "Введите элементы матрицы " << n << "x" << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Введите " << i+1 << " строчку через пробелы:_\b";
        for (int j = 0; j < n; j++) {
            cin >> matrixkek[i][j];
        }
    }
    
}

int main() {
    const int MAX_SIZE = 20;
    int n; // Размер матрицы
    
    cout << "Введите размер квадратных матриц (не более " << MAX_SIZE << "): ";
    cin >> n;
    
    // Проверка корректности размера
    if (n <= 0 || n > MAX_SIZE) {
        cout << "Некорректный размер матрицы!" << endl;
        return 1;
    }
    
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    
    // Ввод первой матрицы
    enterMatrix(matrix1, n);
    
    
    // Ввод второй матрицы
    enterMatrix(matrix2, n);
    
    
    int trace1 = findTrace(matrix1, n);
    int trace2 = findTrace(matrix2, n);
    
    cout << "\nСлед первой матрицы: " << trace1 << endl;
    cout << "След второй матрицы: " << trace2 << endl;
    
    // Вывод матрицы с минимальным следом
    cout << "\nМатрица с минимальным следом:" << endl;
    if (trace1 < trace2) {
        printMatrix(matrix1, n);
    } else if (trace2 < trace1) {
        printMatrix(matrix2, n);
    } else {
        cout << "Следы матриц равны!" << endl;
        cout << "\nПервая матрица:" << endl;
        printMatrix(matrix1, n);
        cout << "\nВторая матрица:" << endl;
        printMatrix(matrix2, n);
    }
    
    return 0;
}