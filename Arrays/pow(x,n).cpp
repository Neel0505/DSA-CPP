// Problem: Pow(x^n) (LeetCode #50)
// Difficulty: Medium
// Approach: Brute Force O(n) - TLE on large inputs
// Later optimized using Binary Exponentiation O(log n)



// Brute Force Approach
/*
class Solution {
public:
    double myPow(double x, int n) {
        double pow = 1;
       for(int i = 0; i < abs(n); i++){
            pow*=x;
       }
       if(n<0){
        return 1/pow;
       }
       else 
         return pow;

    }
    
};
*/

// Binary Exponentiation Approach
// Time Complexity: O(log n)

/*
class Solution {
public:
    double myPow(double x, int n) {
        long binform = n;
        if(binform < 0){
            binform = -binform;
            x = 1/x;
        }
        double pow = 1;
        while(binform > 0){
            if(binform %2 == binform){
                pow*=x;
            }
            x *= x;
            binform /= 2;
        }   
        return pow;
    }
    
};
*/