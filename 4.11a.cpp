// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
#include <cmath>
#include <print>
using namespace std;

int main() {
    double x{1};
    double y{2};
    double z{3};
    double a = (sqrt(abs(x - 1.0)) - cbrt(abs(y))) / (1.0 + (x * x) / 2.0 + (y * y) / 4.0);
    double b = x * (atan(z) + exp(-(x + 3.0)));
    println("Исходные данные: x = {}, y = {}, z = {}", x, y, z);
    println("Ожидаемый результат: a = {:.7f}, b = {:.8f}", a, b);
}
// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
