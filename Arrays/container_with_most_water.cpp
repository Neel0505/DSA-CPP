//Leetcode Problem: Container With Most Water (LeetCode #11)
//Difficulty: Medium
// Problem link: https://leetcode.com/problems/container-with-most-water/


// Total 2 approaches: Brute Force O(n^2) and Two Pointer O(n)
// Brute Force Approach O(n^2) - TLE on large inputs



// Brute Force Approach O(n^2)
/*
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int n = height.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int area = min(height[i], height[j]) * (j - i);
                max_area = max(max_area, area);
            }
        }
        return max_area;
    }
};
*/

// Two Pointer Approach O(n)

/*
class Solution {
public:
    int maxArea(vector<int>& height) {
        lp = 0, rp = height.size() - 1;
        int max_area = 0;
        while(lp < rp){
            int area = min(height[lp], height[rp]) * (rp - lp);
            max_area = max(max_area, area);
            if(height[lp] < height[rp]){
                lp++;
            } else {
                rp--;
        }
    }
    return max_area;
    }
};
*/

