#include <iostream>

int main() {
    // Declare and initialize variables
    int a = 5;
    int b = 10;

    // For "if" statements, the encompassed code is only executed if the
    // condition is True.
    if (a == 5) {
        std::cout << "Inside if statement (a == " << a << ")\n";
    }

    // We can do multiple checks using chained "if"/"else" statements
    // Only 1 of these conditions is every executed
    if (a > 5) {
        std::cout << "a > 5 (within if)\n";
    } else if (b == 10) {
        std::cout << "b == 10 (within else if)\n";
    } else {
        std::cout << "Any other case!\n";
    }

    // Switch statements are an alternative to traditional "if"/"else"
    // statements.
    // We can have blocks executed if we do not put a "break" after each
    // case.
    switch (a) {
        case 4:
            std::cout << a << " == 4 (within case 4)\n";
            break;
        case 6:
            std::cout << a << " == 6 (within case 6)\n";
            break;
        default:
            std::cout << "a == " << a << " (within default)\n";
    }

    return 0;
}