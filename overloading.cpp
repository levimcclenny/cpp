#include <iostream>

// Prints the value of an integer and it's size, and increments the value
int print_and_inc(int i) {
    std::cout << "Value: " << i << ", S: " << sizeof(i) << '\n';
    return i + 1;
}

// Prints the value of a float and it's size, and increments the value
float print_and_inc(float sp) {
    std::cout << "Value: " << sp << ", S: " << sizeof(sp) << '\n';
    return sp + 1;
}

// Prints the value of a double and it's size, and increments the value
double print_and_inc(double dp) {
    std::cout << "Value: " << dp << ", S: " << sizeof(dp) << '\n';
    return dp + 1;
}

int main() {
    // Declare and initialize variables
    int i = 4362;
    float sp = 20.123;
    double dp = 194.421;

    // Call our overloaded functions
    // Functions can be the same name as long as the signatures are different (the
    // compiler can still tell them apart).
    i = print_and_inc(i);
    sp = print_and_inc(sp);
    dp = print_and_inc(dp);

    // Print out the returned values
    std::cout << "New int value " << i << '\n';
    std::cout << "New float value " << sp << '\n';
    std::cout << "New double value " << dp << '\n';

    return 0;
}
