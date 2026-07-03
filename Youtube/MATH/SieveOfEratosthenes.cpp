// To count the number of prime numbers less than or equal to a given integer n, we can use the Sieve of Eratosthenes algorithm. 
// It is an optimized approach over the brute force
// Time Complexity: O(n log log n)

// Leetcode Problem: https://leetcode.com/problems/count-primes/
// Leetcode Problem 204 Count Primes

/*
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1, true); // Create a boolean array to mark prime numbers
        int count = 0; // Initialize the count of prime numbers

        for(int i=2; i<n; i++){
            if(isPrime[i]){ // If the number is prime
                count++; // Increment the count
                for(int j=i*2; j<n; j+=i){ // Mark all multiples of the prime number as non-prime
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
};

*/