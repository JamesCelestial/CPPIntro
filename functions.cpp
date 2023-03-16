#include <iostream>

// Functions in C++ (and C) must specify a return type.
// VOID = returns nothing
void noReturnFunction() {
    std::cout << "Hello world!";
}

// INT = returns integer
int add(int a, int b) {
    int c = a + b;
    return c;
}

// This trend continues for float, double, char, etc


// The main function in a C++ program is an integer function - and must always return 0. Returning 0 means the program has exited with 0 errors
int main() {

    // MAIN PROGRAM STUFF

    return 0;
}