#include <iostream>
#include <string>
using namespace std;
#define MAX_SIZE 256
int main() {
    char str[MAX_SIZE];
    int answer = 0;
    bool last_symbol = false;
    bool help_flag = false;
    
    cout << "Введите число римской нумерацией: ";
    cin.getline(str, MAX_SIZE);
    
    string result = ""; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i + 1] == '\0')
        {
            last_symbol = true;
        }
        switch (str[i])
        {
            case 'I':
                if (help_flag)
                {
                    help_flag = false;
                }
                else
                {
                    if (last_symbol)
                    {
                        answer += 1;
                        
                    }
                    else
                    {
                        switch (str[i+1])
                        {
                            case 'V':
                                answer += 4;
                                help_flag = true;
                                break;
                            case 'X':
                                answer += 9;
                                help_flag = true;
                                break;
                            default:
                                answer += 1;
                                break;
                        }
                    }
                }

                break;
            case 'V':
                if (help_flag)
                {
                    help_flag = false;

                }
                else{
                    answer += 5;
                }
                break;
            case 'X':
                if (help_flag)
                {
                    help_flag = false;
                }
                else
                {
                    if (last_symbol)
                    {
                        answer += 10;
                    }
                    else
                    {
                        switch (str[i+1])
                        {
                            case 'C':
                                answer += 90;
                                help_flag = true;
                                break;
                            case 'L':
                                answer += 40;
                                help_flag=true;
                                break;
                            default:
                                answer += 10;
                                break;
                        }
                    }
                }

                break;
            case 'L':
                if (help_flag)
                {
                    help_flag = false;

                }
                else{
                    answer += 50;
                }
                break;
            case 'C':
                if (help_flag)
                    {
                    help_flag = false;
                }
                else{
                    if (last_symbol)
                    {
                        answer += 100;
                        
                    }
                    else
                    {
                        switch (str[i+1])
                        {
                            case 'D':
                                answer += 400;

                                help_flag = true;
                                break;
                            case 'M':
                                answer += 900;
                                help_flag = true;
                                break;
                            default:
                                answer += 100;
                                break;
                        }
                    }
                }

                break;
            case 'D':
                if (help_flag)
                {
                    help_flag = false;
                }
                else
                {
                    answer += 500;
                }
                break;
            case 'M':
                if (help_flag)
                {
                    help_flag = false;
                }
                else
                {
                    answer += 1000;
                }
                break;
        }
    }
    cout << "Число в десятичной системе счисления:" << answer;
    return 0;
}


// Арабское	Римское	Интересный факт
// 1	I	Самое маленькое
// 4	IV	Пример вычитания
// 9	IX	Еще один пример вычитания
// 39	XXXIX	Максимум три X подряд
// 49	XLIX	Не IL (запрещено)
// 89	LXXXIX	50 + 30 + 9
// 99	XCIX	Не IC (запрещено)
// 499	CDXCIX	400 + 90 + 9
// 888	DCCCLXXXVIII	8 символов, все сложение
// 999	CMXCIX	900 + 90 + 9
// 1666	MDCLXVI	Все символы по убыванию
// 1984	MCMLXXXIV	Год романа Оруэлла
// 2024	MMXXIV	Текущий год
// 3999	MMMCMXCIX	Максимум в классической системе