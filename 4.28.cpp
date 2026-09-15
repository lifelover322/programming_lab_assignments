#include <cmath>
#include <print>
using namespace std;

int main() {
    double x {2};
    double otv {2*pow(x,4) - 3*pow(x,3) + 4*pow(x,2) - 5*x + 6};
    println("Исходные данные: x = {}", x);
    println("Ожидаемый результат: {}", otv);
}
