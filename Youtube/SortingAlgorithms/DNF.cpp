// Leetcode problem: 75
// Difficulty: Medium
// Problem link: https://leetcode.com/problems/sort-colors/
// Pending Approach: Dutch National Flag Algorithm (One Pass)

// Tried brute force appraoch prevously now revisiting the problem with youTube video 25 for DNF Algorithm

// Brute Force Approach Ascending Order
/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i=0;i<n;i++){
            int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[min_index]) {
            min_index = j;
            }
        }
            if (min_index != i) {
            std::swap(nums[i], nums[min_index]);
            }
        }
 }  
};
*/



// More optimized approach over the brute force (Still not the best approach)
/*
class Solution {    //Total Time Complexity: O(N) + O(N) = O(2N) = O(N)
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;

        //Time Complexity: O(N)
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                count0++;
            }
            else if(nums[i] == 1){
                count1++;
            }
            else{
                count2++;
            }
        }
        //Time Complexity: O(N)
        int index = 0;
        for(int i=0;i<count0;i++){
            nums[index++] = 0;
        }
        for(int i=0;i<count1;i++){
            nums[index++] = 1;
        }
        for(int i=0;i<count2;i++){
            nums[index++] = 2;
        }
    }
};
*/

// Dutch National Flag Algorithm (One Pass)
// Total Time Complexity: O(N) + O(N) = O(2N) = O(N)
// Space Complexity: O(1)
// This is the best approach for this problem
// This is a one pass algorithm
/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low++], nums[mid++]);
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high--]);
            }
        }
    }
};
*/ 