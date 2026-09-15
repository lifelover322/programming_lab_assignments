
#include <iostream>
#include <print>


using namespace std;

int main() {
    double x{}, y{};
    println("Исходнные данные:");
    cin >> x >> y;

    // vector<double> cord_x1 = {-2, -1, 0, 1};
    // vector<double> cord_y2 = {-1, 0, 1};
    bool inside =
    y <= 2 * x + 3 &&
    y <= -x / 2 + 0.5 &&
    y >= (x - 1) / 3;

    if (inside) {
        println("точка принадлежит заштрихованной части плоскости.");
    }
    else {
        println("точка не принадлежит заштрихованной части плоскости.");
    }
}
