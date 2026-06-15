// leetcode 278. First Bad Version
// https://leetcode.com/problems/first-bad-version/
// This problem can be solved using binary search by repeatedly dividing the search space in half until we find the first bad version.
// time complexity: O(log n)

/*
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1, end = n;
while(start < end) {
    int mid = start + (end - start) / 2;
    if(isBadVersion(mid)) {
        end = mid;       
    } else {
        start = mid + 1; 
    }
}
return start;
        
    }
};
*/