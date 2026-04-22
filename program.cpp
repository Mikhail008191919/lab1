//Самое начало
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string toUpper(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
}

string toLower(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = tolower(text[i]);
    }
    return text;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "=== Лабораторная работа №1 ===" << endl;
    cout << "Тема: Обработка строк" << endl;
    cout << "Вариант: Смена регистра" << endl;
    cout << "===============================" << endl << endl;

    string str;
    int choice;

    cout << "Введите строку: ";
    getline(cin, str);

    cout << endl;
    cout << "Выберите действие:" << endl;
    cout << "1 - Перевести в ВЕРХНИЙ регистр" << endl;
    cout << "2 - Перевести в нижний регистр" << endl;
    cout << "Ваш выбор: ";
    cin >> choice;

    cout << endl;

    if (choice == 1)
    {
        cout << "Результат: " << toUpper(str) << endl;
    }
    else if (choice == 2)
    {
        cout << "Результат: " << toLower(str) << endl;
    }
    else
    {
        cout << "Ошибка: неверный выбор." << endl;
    }

    cout << endl;
    cout << "Программа завершена." << endl;

    return 0;
}
