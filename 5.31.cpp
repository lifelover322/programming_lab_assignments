// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
#include <iostream>
#include <print>
#include <cmath>
using namespace std;

int main() {
    int a,b,r,s;
    println("Исходные данные:");
    cin >> a >> b >> r >> s;
    int remainder_answer {a%b};
    // double remainder_answer {fmod(a,b)};

    if (remainder_answer == s || remainder_answer == r) {
        println("верно, остаток равен {}",remainder_answer);
    }
    else {
        println("не верно, остаток не равен ни {}, ни {}.",s,r);
    }
}
// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
