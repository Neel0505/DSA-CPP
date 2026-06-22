// Aggressive Cows Problem
// approach: Binary Search
// YOUTUBE VIDEO: https://youtu.be/7wOzDqsfXy0?si=wdPfSPVxUIFMDHnh

/*
QUESTION:

Aggressive Cows Problem
Assign C cows to N stalls such that min distance between them is largest possible.
Return largest minimum distance.

N=5 arr = [1, 2, 8, 4, 9]

C =3
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int c, int minAllowedDistance){ // O(N)

    int count = 1; // Start with the first cow placed in the first stall
    int lastPos = arr[0]; // The position of the last placed cow
    
    for(int i=1; i<n; i++){
        if(arr[i] - lastPos >= minAllowedDistance){ // If the distance between the current stall and the last placed cow is greater than or equal to minAllowedDistance
            count++; // Place a cow in the current stall
            lastPos = arr[i]; // Update the position of the last placed cow
        }
        if(count == c) return true; // If we have placed all cows, return true
    }
    
    return count >= c; // Return true if we were able to place at least c cows, otherwise return false
}

int getDistance(vector<int> &arr, int n, int c){ // O(N)
    sort(arr.begin(), arr.end()); // Sort the stall positions to ensure we can calculate distances correctly
    int st = 1; // Start with the first cow placed in the first stall
    int end = arr[n-1] - arr[0]; // The maximum possible distance between the first and last stall
    int ans = -1; // To store the largest minimum distance found
    
    while(st <= end){ // O(log (max distance))
        int mid = st + (end - st)/2; // Calculate the middle distance to check
        if(isPossible(arr, n, c, mid)){ // If it's possible to place cows with at least mid distance apart
            ans = mid; // Update the answer with the current mid distance
            st = mid + 1; // Try for a larger distance
        } else {
            end = mid - 1; // Try for a smaller distance
        }
    }

    
    return ans; // Return the total number of cows that can be placed with at least minDist distance apart
}

int main(){
    int n = 5;
    int c = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getDistance(arr, n, c) << endl; // Output the number of cows that can be placed with at least minDist distance apart
    return 0;
}