// leetcode 39. Combination Sum
// https://leetcode.com/problems/combination-sum/

/*
class Solution {
public:

    set<vector<int>>st;

    void getAllCombinations(vector<int>&arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combin){ // Helper Function 
        if(idx == arr.size() || tar < 0){
            return;
        }

        if(tar == 0){
        if(st.find(combin) == st.end()){
            st.insert(combin);
            ans.push_back({combin});
            return;
        }
        }


        combin.push_back(arr[idx]);
        //single
        getAllCombinations(arr, idx+1, tar-arr[idx], ans, combin);
        //multiple
        getAllCombinations(arr, idx, tar-arr[idx], ans, combin);
        combin.pop_back();

        // exclision
        getAllCombinations(arr, idx+1, tar, ans, combin);
    
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>combin;

        getAllCombinations(candidates, 0, target, ans, combin);
        return ans;
        
    }
};
*/
