// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main() {
    double x1{}, y1{}, x2{}, y2{}, x3{}, y3{};
    println("Введите исходные данные через пробел:");
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;


    double c1 = x1 * y2 - y1 * x2;
    double c2 = x2 * y3 - y2 * x3;
    double c3 = x3 * y1 - y3 * x1;

    bool inside = (c1 >= 0 && c2 >= 0 && c3 >= 0) || (c1 <= 0 && c2 <= 0 && c3 <= 0);

    if (inside) {
        println("Начало координат принадлежит треугольнику.");
    }
    else {
        println("Начало координат не принадлежит треугольнику.");
    }

}
// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
