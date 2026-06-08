// Problem: Pow(x^n) (LeetCode #50)
// Difficulty: Medium
// Approach: Brute Force O(n) - TLE on large inputs
// TODO: Implement Binary Exponentiation O(log n)

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