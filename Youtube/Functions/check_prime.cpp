#include<iostream>
using namespace std;    

int isPrime(int n){
    if (n <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0) return 0; // n is divisible by a number other than 1 and itself
    }
    return 1; // n is a prime number
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}