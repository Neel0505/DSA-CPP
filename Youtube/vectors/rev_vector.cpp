#include<iostream>
#include<vector>
using namespace std;    

//2 pointers approach
int main() {    
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements of the vector: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    cout << "Original Vector: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;


    int start = 0; // Pointer to the beginning of the array
    int end = n - 1; // Pointer to the end of the array

    cout << "Reversed Vector: ";
    while (start <= end) {
        swap(vec[start], vec[end]); // Swap the elements at the start and end pointers
        start++; // Move the start pointer forward
        end--; // Move the end pointer backward
    }

    // Print the reversed vector 
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}