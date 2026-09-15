#include <iostream>
#include <print>
#include <cmath>
using namespace std;

int main() {
    double a{},b{},r{},s{};
    println("Исходные данные:");
    cin >> a >> b >> r >> s;
    // double remainder {a/b};
    // int remainder_answer {a%b};
    double remainder_answer {fmod(a,b)};

    if (remainder_answer == s) {
        println("верно, остаток равен {}",s);
    }
    else if  (remainder_answer == r) {
        println("верно, остаток равен {}",r);
    }
    else {
        println("не верно, остаток не равен ни {}, ни {}.",s,r);
    }

}