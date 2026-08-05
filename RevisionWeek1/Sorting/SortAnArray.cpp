// Sort an array using Merge Sort algorithm
// Leetcode Problem: https://leetcode.com/problems/sort-an-array/
// Leetcode Problem Number: 912

// Time Complexity: O(n log n)
// Space Complexity: O(n)

/*
class Solution {
public:
    void merge(vector<int>& nums, int st, int mid, int end) {
        vector<int> temp;
        int i = st; 
        int j = mid + 1;
    

    while (i <= mid && j <= end) {
        if (nums[i] <= nums[j]) {
            temp.push_back(nums[i]);
            i++;
        } else {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while (i <= mid) {
        temp.push_back(nums[i]);
        i++;
    }
    while (j <= end) {
        temp.push_back(nums[j]);
        j++;
    }
    for (int k = 0; k < temp.size(); k++) {
        nums[st + k] = temp[k];
    }

}
vector<int> sortArray(vector<int>& nums) {
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
}
void mergeSort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, st, mid, end);
    }
}
};


*/