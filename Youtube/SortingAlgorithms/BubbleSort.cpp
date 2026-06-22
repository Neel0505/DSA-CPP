// Time Complexity: O(N^2) 
// Space Complexity: O(1) 

#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(int arr[], int n){
    bool isSwap = false; // To check if any swapping occurs in the current pass
    for(int i=0; i<n-1; i++){
        isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){ // If the current element is greater than the next element, swap them
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) // If no swapping occurred in the current pass, the array is already sorted
            return;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    int arr[] = {64, 34, 25, 12, 22};
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}