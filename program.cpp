#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string convertToUpper(const string& text)
{
    string output = text;
    for (size_t i = 0; i < output.length(); i++)
    {
        output[i] = toupper(output[i]);
    }
    return output;
}

string convertToLower(const string& text)
{
    string output = text;
    for (size_t i = 0; i < output.length(); i++)
    {
        output[i] = tolower(output[i]);
    }
    return output;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "=== Лабораторная работа №1 ===" << endl;
    cout << "Тема: Обработка строк" << endl;
    cout << "Вариант: Смена регистра" << endl;
    cout << "===============================" << endl << endl;

    string userString;
    int mode;

    cout << "Введите строку для обработки: ";
    getline(cin, userString);

    cout << endl;
    cout << "Доступные операции:" << endl;
    cout << "1 - Преобразовать строку в ЗАГЛАВНЫЕ буквы" << endl;
    cout << "2 - Преобразовать строку в строчные буквы" << endl;
    cout << "Введите номер операции (1 или 2): ";
    cin >> mode;

    cout << endl;
    cout << "Выполнение..." << endl;

    if (mode == 1)
    {
        cout << "Результат преобразования: " << convertToUpper(userString) << endl;
    }
    else if (mode == 2)
    {
        cout << "Результат преобразования: " << convertToLower(userString) << endl;
    }
    else
    {
        cout << "Ошибка: выбрана несуществующая операция." << endl;
    }

    cout << endl;
    cout << "Программа завершена." << endl;

    return 0;
}
