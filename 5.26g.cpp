// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
#include <iostream>
#include <print>

using namespace std;

int main() {
    double a{}, result{};
    cout << "Введите a: ";
    cin >> a;

    if (a < 0.0) {
        result = -a;
    }
    else if (a < 1.0) {
        result = a;
    }
    else if (a < 2.0) {
        result = 1.0;
    }
    else {
        // result = 5.0 - 2.0 * a;
        // result = 1.0 + (-1.0 - 1.0) * (a - 2.0) / (3.0 - 2.0);
        double x1{2.0}, y1{1.0}, x2{3.0}, y2{-1.0};
        double k = (y2 - y1) / (x2 - x1);
        double b = y1 - k * x1;
        result = k * a + b;

    }

    println("Исходные данные: a = {}", a);
    println("Результат: {}", result);
}
// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
