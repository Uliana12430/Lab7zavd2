#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num1, num2, result;
    char operation;

    cout << "Введіть перше число: ";
    cin >> num1;

    cout << "Введіть операцію (+, -, *, /): ";
    cin >> operation;

    cout << "Введіть друге число: ";
    cin >> num2;

    if (operation == '/' && num2 == 0) {
        cout << "Помилка: ділення на нуль неможливе!" << endl;
        return 1;
    }

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        cout << "Помилка: невідома операція!" << endl;
        return 1;
    }

    cout << "Результат: " << result << endl;

    return 0;
}
