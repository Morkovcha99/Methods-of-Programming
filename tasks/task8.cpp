#include <iostream>
#include <string>
#include <locale>

using namespace std;

#define MAX_SIZE 256
int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    char str[MAX_SIZE];
    int count = 0;
    
    cout << "Введите строку: ";
    cin.getline(str, MAX_SIZE);
    
    int j = 0;  // Индекс для записи "хороших" символов
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ':') {
            count++;
        } else {
            str[j] = str[i];
            j++;
        }
    }
    
    str[j] = '\0';  // Обрезаем строку до новой длины
    
    cout << "Строка после удаления двоеточий: " << str << endl;
    cout << "Количество удаленных двоеточий: " << count << endl;
    
    return 0;
}