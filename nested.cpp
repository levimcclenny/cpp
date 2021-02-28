#include <iostream>

int main() {
    // Declare and initialize variables
    int multiplicand = 5;
    int multiplier = 10;
    int product = 0;

    // Compute 5 * 10 using addition
    std::cout << "Before loop. Product = " << product << '\n';
    for (int i = 0; i < multiplier; i++) {
        product += multiplicand;
        // Print out the 5th iteration
        if (i == 4) {
            std::cout << "Iteration " << i << ": Product = " << product << '\n';
        } else {
            // Immediately proceed to next iteration
            continue;
        }
        std::cout << "This is printed only on iteration " << i << '\n';
    }
    std::cout << "Product = " << product << '\n';

    return 0;
}