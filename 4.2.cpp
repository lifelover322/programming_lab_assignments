
#include <cmath>
#include <print>
using namespace std;

int main() {
    double x = -4.5;
    double y = 2.0;
    double z = (abs(x) - abs(y)) / (1.0 + abs(x * y));
    println("Исходные данные x = {}\nИсходные данные y = {}", x, y);
    println("Ожидаемый результат: = {}", z);
}
