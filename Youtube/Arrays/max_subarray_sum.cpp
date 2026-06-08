#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n = 5;
    vector<int> arr = {3, -4, 5, -1, 7 , -8 };
    int max_sum = INT_MIN;

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int sum = 0;
            for(int i = start; i <= end; i++){
                sum += arr[i];
            }
            max_sum = max(max_sum, sum);
        }
    }
    cout << "Maximum subarray sum is: " << max_sum << endl;
    return 0;
}