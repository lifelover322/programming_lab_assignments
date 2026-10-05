// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
#include <cmath>
#include <print>
using namespace std;

int main() {
    double v1 = 10.0, t1 = 90.0;
    double v2 = 90.0, t2 = 10.0;
    double v = v1 + v2;
    double t = (v1 * t1 + v2 * t2) / v;
    println("Исходные данные: V1 = {}, T1 = {}\nИсходные данные: V2 = {}, T2 = {}", v1, t1, v2, t2);
    println("Ожидаемый результат: V = {}, Т = {}", v, t);
}
// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
