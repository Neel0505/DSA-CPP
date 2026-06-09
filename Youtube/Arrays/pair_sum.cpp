#include<iostream>
#include<vector>
using namespace std;

/*  Brute Force Approach
    Time Complexity: O(n^2)
    Space Complexity: O(1)

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i]+nums[j] == target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
*/


// Optimal Approach using 2 Pointers
// left pointer at the start and right pointer at the end
// Time Complexity: O(n)

vector<int> pairSum(vector<int> nums , int target){
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;

    while(i < j){
        int sum = nums[i] + nums[j];
        int pairSum = nums[i] + nums[j];

        if(pairSum == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            j--;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;
    vector<int> ans = pairSum(nums,target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}