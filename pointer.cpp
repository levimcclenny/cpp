#include <iostream>

using namespace std;

int main(){

    int a = 5;

    int *b;
    b = &a;

    cout << "a: value: " << a << ", address " << &a << endl;
    cout << "b: value: " << b << ", address " << &b << endl;
    cout << "*b = a = " <<*b << endl;
    cout << endl;

    a = 10;

    cout << "a: value " << a << ", address " << &a << endl;
    cout << "b: value " << b << ", address " << &b << endl;
    cout << "*b = a = " <<*b << endl; // dereferencing the pointer
    cout << endl;

    int c = 3;
    int &d = c;
    cout << "c: value: " << c << ", address" << &c << endl;
    cout << "d: value: " << d << ", address" << &d << endl;

    return 0;
}