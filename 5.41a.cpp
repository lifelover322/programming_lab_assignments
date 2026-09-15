#include <iostream>
#include <print>


using namespace std;

int main () {

    int k{}, l{}, m{}, n{};
    println("Исходные данные:");
    cin >> k >> l >> m >> n;

    // vector<int> black_x{2,4}, black_y{1,1};
    // vector<int> white_x{}, white_y{};
    if ((k+l)%2 == (m+n)%2) {
        println("поля одного цвета");
    }
    else {
        println("поля разных цветов");
    }


}