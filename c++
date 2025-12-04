#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    int count = 0;

    cout << "[ + ] Введите число: ";
    cin >> number;

    while (number > 0) {
        number /= 10;      // "отрезаем" последнюю цифру
        count++;
    }

    cout << "[ + ] Количество цифр: " << count << endl;

    return 0;
}
