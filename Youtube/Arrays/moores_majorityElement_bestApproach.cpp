#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int frequency = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (frequency == 0) {
            ans = nums[i];
        }

        if (ans == nums[i]) {
            frequency++;
        } else {
            frequency--;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;
    return 0;
}