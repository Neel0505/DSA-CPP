#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool isPrime = true;
    if(n <= 1){
        isPrime = false;
    } else {
        for(int i=2; i*i<=n; i++){
            if(n % i == 0){
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime){
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }
}

// to find in range of 1 to n which numbers are prime or not
// We can use the Sieve of Eratosthenes algorithm to find all prime numbers in a given range. Implementation in Next file.