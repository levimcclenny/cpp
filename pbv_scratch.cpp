#include <cstdlib>
#include <iostream>

using namespace std;

void multiply_pbv(int a, int b, int p){
    p = a * b;
    cout << "Pass by value product = " << p << endl;
}

void multiply_pbr(int &a, int &b, int &p){
    p = a * b;
    cout << "Pass by value product = " << p << endl;
}

int main() {
    int multiplier = 5;
    int multiplicand = 10;
    int product = 0;

    multiply_pbv(multiplier, multiplicand, product);

    cout << "Main function product is " << product << endl;

    multiply_pbr(multiplier, multiplicand, product);

    cout << "Main function product is " << product << endl;

    return 0;
}
