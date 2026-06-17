// Approach: Binary Search
// YOUTUBE VIDEO: https://youtu.be/JRAByolWqhw?si=LlOaY3GbyXPcdGAe

/*
QUESTION:
Book Allocation Problem

There are N books, each ith book has A[i] number of pages.

You have to allocate books to M number of students so that the maximum number of
pages allocated to a student is minimum.

. Each book should be allocated to a student.
. Each student has to be allocated at least one book.
. Allotment should be in contiguous order.

Calculate and return that minimum possible number.

Return -1 if a valid assignment is not possible.


*/

// Time Complexity: O(N log (sum of pages))
// Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){ // O(N)
    int studentCount = 1; // Start with the first student
    int pageSum = 0; // To keep track of the total pages allocated to the current student

    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPages) return false; // If a single book has more pages than maxAllowedPages, it's not possible to allocate

        if(pageSum + arr[i] <= maxAllowedPages){ // If adding the current book's pages does not exceed the maxAllowedPages for the current student
            pageSum += arr[i]; // Add the current book's pages to the current student's total
        } else {
            studentCount++;
            pageSum = arr[i]; // Start counting pages for the next student

        }
    }
    return studentCount > m ? false : true; // If the number of students needed is more than m, return false, otherwise return true
}
int allocateBooks(vector<int> &arr, int n, int m){ // O(N log (sum of pages))  that is O(LogN * N) 
    if(m > n) return -1; // if there are more students than books, it's not possible to allocate
    
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int ans = -1;
    int st = 0 , end = sum; ; // Range of possible answers
    
    while(st <= end){
        int mid = st + (end -st)/2; // mid is the maximum number of pages allocated to a student

        if(isValid(arr, n, m, mid)){ // if it is possible to allocate books such that the maximum number of pages allocated to a student is mid
            ans = mid;
            end = mid - 1; // try to find a smaller maximum

        } else {
            st = mid + 1; // try to find a larger maximum
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2, 1, 3, 4};
    int m = 2;
    int n = arr.size();

    cout << allocateBooks(arr, n, m) << endl;

    return 0;
}