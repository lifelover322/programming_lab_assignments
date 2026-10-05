// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
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

    int res_pol{d1*1000+d2*100+d3*10+d4};
    println("{:04}",res_pol);


    if (n == res_pol) {
        println("число является палиндромом.");
    } else {
        println("число не является палиндромом.");
    }



}
// Поставьте звёздочку проекту на GitHub, чтобы поддержать его!
