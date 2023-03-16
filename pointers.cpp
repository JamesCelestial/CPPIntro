#include <iostream>
#include <string>

using namespace std;


int main() {
    // SETTING X TO 5
    // ON EXECUTION, X = 5 (obviously)
    int x = 5;

    // CREATING A POINTER TO X - * SETS DATA TYPE, & DENOTES A POINTER
    // ON EXECUTION, xP = 0x61ff14 (the memory address X is stored at)
    int * xP = &x;

    // THE * USED IN THIS CONTEXT "DECODES" A POINTER. 
    // ON EXECUTION, Y = 5
    int y = *xP;

    return 0;
}
