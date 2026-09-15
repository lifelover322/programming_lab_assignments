#include <iostream>
#include <print>

using namespace std;

int main() {
    double x{}, y{}, z{};
    println("Введите x,y,z(через пробел): ");
    cin >> x >> y >> z;

    bool exists = (x + y > z) && (x + z > y) && (y + z > x);
    // проверка треугольника
    bool is_acute = (x * x + y * y > z * z) && (x * x + z * z > y * y) && (y * y + z * z > x * x);
    // проверка остроугольный ли он


    if (!exists) {
        println("Треугольник не существует.");
    }
    else {
        if (is_acute) {
            println("Исходные данные: x = {}, y = {}, z = {}", x, y, z);
            println("Ожидаемый результат: треугольник существует и он остроуголен.");
        }
        else {
            println("Исходные данные: x = {}, y = {}, z = {}", x, y, z);
            println("Ожидаемый результат: треугольник существует и он не остроуголен.");
        }
    }
}
