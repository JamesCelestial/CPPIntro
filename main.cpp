#include <iostream>
#include <string>

using namespace std;


int main() {
    int x = 5;

    int * xP = &x;

    int y = *xP;

    return 0;
}