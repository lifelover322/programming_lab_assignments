#include <iostream>
#include <print>

using namespace std;

int main() {
    double a{}, result{};
    cout << "Введите a: ";
    cin >> a;

    if (a <= 0.0) {
        result = -a;
    }
    else if (a <= 1.0) {
        result = a;
    }
    else if (a <= 2.0) {
        result = 1.0;
    }
    else {
        result = 5.0 - 2.0 * a;
    }

    println("Исходные данные: a = {}", a);
    println("Результат: {}", result);
}
