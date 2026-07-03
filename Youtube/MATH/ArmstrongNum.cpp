#include<iostream>
using namespace std;


bool isArmstrong(int n) {
    int copyN = n;
    int sumOfCubes = 0;

    while (n != 0) {
        int digit = n % 10; // Get the last digit
        sumOfCubes += digit * digit * digit; // Add the cube of the digit to the sum
        n /= 10; // Remove the last digit
    }
    
    return sumOfCubes == copyN;
}

int main() {
    int n = 153;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}


