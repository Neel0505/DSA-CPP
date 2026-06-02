#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int min_index = 0; // Assume the first element is the smallest
    int max_index = 0; // Assume the first element is the largest
     for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i; // Update index if a smaller element is found
        }
    }


    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i; // Update index if a larger element is found
        }
    }
    std::cout << "The index of the largest element is: " << max_index << std::endl;
    std::cout << "The index of the smallest element is: " << min_index << std::endl;

    return 0;
}