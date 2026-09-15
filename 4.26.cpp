#include <cmath>
#include <print>
using namespace std;

int main() {
    double f{3.14};
    double r{13.7};
    double answer{r * r / 2 * f};
    println("Исходные данные: F = {}", f);
    println("Ожидаемый результат: S = {}", answer);
}