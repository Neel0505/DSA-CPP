// 4 sum II
// Leetcode: https://leetcode.com/problems/4sum-ii/
// Leetcode Problem Number: 454

// Reference: DSA-C++\Youtube\Hashing\4sum.cpp

/*
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans =0;

        unordered_map<int, int> sumCount;
for(int i = 0; i < nums1.size(); i++){
    for(int j = 0; j < nums2.size(); j++){
        int sum = nums1[i] + nums2[j];
        sumCount[sum]++;
    }
}

for(int i = 0; i < nums3.size(); i++){
    for(int j = 0; j < nums4.size(); j++){
        int sum = nums3[i] + nums4[j];
        if(sumCount.count(-sum)){
    ans += sumCount[-sum];
}
    }
}
            return ans;
    }

};
*/