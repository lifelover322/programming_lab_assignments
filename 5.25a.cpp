#include <iostream>
#include <print>

using namespace std;

int main() {
    double a{}, res{};
    cout << "Введите a: ";
    cin >> a;

    if (a >= -2.0 && a < 2.0) {
        res = a * a;
    }
    else {
        res = 4;
    }

    println("Исходные данные: a = {}", a);
    println("Результат: {}", res);
}
