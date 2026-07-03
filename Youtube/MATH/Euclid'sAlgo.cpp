// Algorithm to find the greatest common divisor (GCD) of two numbers using Euclid's algorithm


#include <iostream>
using namespace std;

// Function to find the GCD using Euclid's Algorithm
int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;   // Corrected
        }
    }

    if (a == 0) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int a = 48, b = 18;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    return 0;
}