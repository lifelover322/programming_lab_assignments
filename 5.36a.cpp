#include<iostream>
#include<print>

using namespace std;

int main() {
    int n{};
    println("Исходные данные:");
    cin >> n;

    if (n<0 || n >9999) {
        println("введены некорректные данные.");
        return 0;
    }
    int d4{n / 1000};
    int d3{(n / 100) % 10};
    int d2{(n / 10) % 10};
    int d1{n % 10};

    if (d4 == d1 && d3 == d2) {
        println("число является палиндромом.");
    } else {
        println("число не является палиндромом.");
    }



}