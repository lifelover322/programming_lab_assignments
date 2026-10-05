// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
#include <iostream>
#include <algorithm>
#include <print>

using namespace std;

int main() {
    double x{2},y{5},result{};

    println("Исходные данные: x = {}, y = {}", x, y);
    // if (x > y) {
    //     result = x;
    // }
    // else {
    //     result = y;
    // }

    double result2 = (x > y) ? x : y;

    println("Max = {}",result2);
}
// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
