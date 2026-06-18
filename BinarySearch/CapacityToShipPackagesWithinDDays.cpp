// Leetcode 1011. Capacity To Ship Packages Within D Days
// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
// Time Complexity: O(n*log(sum of array))
// Space Complexity: O(1)

/*
class Solution {
        bool isPossible(vector<int> &weights, int n, int m, int maxAllowedweight){ 
    int dayCount = 1;
    int wt = 0;

    for(int i=0; i<n; i++){
        if(wt + weights[i] <= maxAllowedweight){
            wt += weights[i];
        }
        else{
            dayCount++;
            wt = weights[i];
        }
    }
    return dayCount <= m;
}
public:
    int shipWithinDays(vector<int>& weights, int days) {

    int sum = 0;
    int maxVal = INT_MIN;
    int n = weights.size();
    for(int i=0; i<n; i++){ 
        sum += weights[i];
        maxVal = max(maxVal, weights[i]);
    }

    int start = maxVal;
    int end = sum;
    int ans = -1;
    while(start <= end){ 
        int mid = start + (end - start)/2;

        if(isPossible(weights, n, days, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{ 
            start = mid + 1;
        }
    }
    return ans;
}


    
};

*/