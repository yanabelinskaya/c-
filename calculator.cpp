#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b, res;
    char oper;
    do {
        cout << "Выберите операцию:" << endl;
        cout << "1.Сложение" << endl;
        cout << "2.Вычитание" << endl;
        cout << "3.Умножение" << endl;
        cout << "4.Деление" << endl;
        cout << "5.Возведение в степень" << endl;
        cout << "6.Нахождение квадратного корня" << endl;
        cout << "7.Нахождение 1 процента от числа" << endl;
        cout << "8.Найти факториал от числа" << endl;
        cout << "9.Выйти из программы" << endl;
        cin >> oper;


        switch (oper) {
        case '1':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Сумма чисел = " << a + b << endl;
            break;
        case '2':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Разность чисел = " << a - b << endl;
            break;
        case '3':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Произведение чисел = " << a * b << endl;
            break;
        case '4':
            cout << "Введите делимое: ";
            cin >> a;
            cout << "Введите делитель: ";
            cin >> b;
            if (b != 0) {
                res = a / b;
                cout << "Частное чисел = " << res << endl;
            }
            else {
                cout << "Ошибка. Деление на ноль" << endl;
            }
            break;
        case '5':
            cout << "Введите число: ";
            cin >> a;
            cout << "Введите степень: ";
            cin >> b;
            cout << "Результат = " << pow(a, b) << endl;
            break;
        case '6':
            cout << "Введите число: ";
            cin >> a;
            cout << "Квадратный корень = " << sqrt(a) << endl;
            break;
        case '7':
            cout << "Введите число: ";
            cin >> a;
            res = a * 0.01;
            cout << "Один процент от числа = " << res << endl;
            break;
        case '8':
            cout << "Введите число: ";
            cin >> a;
            res = 1;
            for (int i = 1; i <= a; i++) {
                res *= i;
            }
            cout << "Факториал числа = " << res << endl;
            break;
        case '9':
            cout << "До свидания!" << endl;
            abort();
        default:
            cout << "Ошибка. Неправильная операция!" << endl;
        }
    } while (oper != 9);

}

