#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    double num1, num2;
    char op;

    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть оператор (+, -, *, /): ";
    cin >> op;
    cout << "Введіть друге число: ";
    cin >> num2;

    switch (op) {
        case '+': cout << "Результат: " << num1 + num2 << endl; break;
        case '-': cout << "Результат: " << num1 - num2 << endl; break;
        case '*': cout << "Результат: " << num1 * num2 << endl; break;
        case '/': 
            if (num2 != 0)
                cout << "Результат: " << num1 / num2 << endl;
            else
                cout << "Помилка: ділення на нуль!" << endl;
            break;
        default: cout << "Невідомий оператор!" << endl;
    }

    return 0;
}

