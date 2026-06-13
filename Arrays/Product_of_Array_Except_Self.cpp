// leetcode problem: Product of Array Except Self (LeetCode #238)
// Difficulty: Medium
// Problem link: https://leetcode.com/problems/product-of-array-except-self/


// Approach: Two Passes (Left and Right Product)
// Time Complexity: O(n)
/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
    std::vector<int> result(n, 1);

    int left_product = 1;
    for (int i = 0; i < n; ++i) {
        result[i] = left_product;
        left_product *= nums[i];
    }

    int right_product = 1;
    for (int i = n - 1; i >= 0; --i) {
        result[i] *= right_product;
        right_product *= nums[i];
    }

    return result;
}
};
*/


// Brute Force Approach
// Time Complexity: O(n^2)
/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

       for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(i != j) {
                    ans[i] *= nums [j];
                }
            }
        }

        return ans;

    }
};
*/

// Youtube Approach: https://youtu.be/TW2m8m_FNJE?si=heaBXfKq8Oz49JBo
// Time Complexity: O(n)

/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    //prefix
    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    //suffix
    for(int i=n-2; i>=0; i -- ) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }   

        for(int i=0; i<n; i++) {
          ans[i] = prefix[i] * suffix[i];

         return ans;
        }
    }
};
*/

// Space Complexity Optimization: O(1) (excluding the output array)

/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    // Calculate prefix products and store in ans
    for(int i=1; i<n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    // Calculate suffix products on the fly and multiply with prefix products in ans
    int suffix = 1;
    for(int i=n-1; i>=0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    return ans;
}
};  
*/