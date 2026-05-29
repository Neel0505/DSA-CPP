#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printNPrimes(int n) {
    int count = 0, num = 2;

    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    printNPrimes(n);

    return 0;
}