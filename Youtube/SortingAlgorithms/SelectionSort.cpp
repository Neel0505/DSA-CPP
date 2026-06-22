// Time Complexity: O(N^2) 
// Space Complexity: O(1)

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i; // Assume the minimum element is the first element of the unsorted part
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){ // If the current element is smaller than the minimum element found so far, update minIndex
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // Swap the found minimum element with the first element of the unsorted part
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
    int arr[] = {64, 25, 12, 22, 11};
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}