#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    //определяем размер матрицы
    const int a = 3;
    const int b = 5;
    float matrix[a][b];

    // Ввод элементов матрицы
    cout << "Введите элементы для 1 строки:" << endl;
    for (int j = 0; j < b; ++j) {
        cout << "Элемент " << j + 1 << ": ";
        cin >> matrix[0][j];
    }

    cout << "Введите элементы для 2 строки:" << endl;
    for (int j = 0; j < b; ++j) {
        cout << "Элемент " << j + 1 << ": ";
        cin >> matrix[1][j];
    }

    cout << "Введите элементы для 3 строки:" << endl;
    for (int j = 0; j < b; ++j) {
        cout << "Элемент " << j + 1 << ": ";
        cin >> matrix[2][j];
    }

    // Вычисление и вывод среднего арифметического для каждой строки
    float sum1 = 0;
    float sum2 = 0;
    float sum3 = 0;
    //вычисляем сумму элементоав для каждой строки
    for (int j = 0; j < b; ++j) {
        sum1 += matrix[0][j];
        sum2 += matrix[1][j];
        sum3 += matrix[2][j];
    }
    //среднее арифметическое
    float sr1 = sum1 / b;
    float sr2 = sum2 / b;
    float sr3 = sum3 / b;

    cout << "Среднее арифметическое для 1 строки: " << sr1 << endl;
    cout << "Среднее арифметическое для 2 строки: " << sr2 << endl;
    cout << "Среднее арифметическое для 3 строки: " << sr3 << endl;

    return 0;
}