#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    int n = 6;
    vector<int> arr = {3, -4, 5, -1, 7 , -8 };
    int max_sum = INT_MIN;
    int current_sum = 0;

    for(int i = 0; i < n; i++){
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum);
        if(current_sum < 0){
            current_sum = 0;
        }
    }
    cout << "Maximum subarray sum is: " << max_sum << endl;
    return 0;
}