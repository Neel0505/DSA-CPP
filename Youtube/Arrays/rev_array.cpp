#include<iostream>
using namespace std;    

//2 pointers approach
int main() {    
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    int start = 0; // Pointer to the beginning of the array
    int end = n - 1; // Pointer to the end of the array

    cout << "Reversed array: ";
    while (start <= end) {
        swap(arr[start], arr[end]); // Swap the elements at the start and end pointers
        start++; // Move the start pointer forward
        end--; // Move the end pointer backward
    }

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}