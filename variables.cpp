#include <iostream>

using namespace std;

int main(){
    // declare variables
    float a;
    float b;
    float sum;
    const char* some_string = "hey there, fella!\n";

    // initialize variables
    a = 5.54;
    b = 10.06;

    // compute sum
    sum = a+b;

    // print sum
    cout << some_string;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
    return 0;
}