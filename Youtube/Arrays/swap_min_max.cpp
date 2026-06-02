#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Original array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int minIndex = 0;
    int maxIndex = 0;
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
            minIndex = i;
        }
    }

    int max = arr[0];
    for(int i=1; i<n; i++){ 
        if(arr[i]>max){
            max = arr[i];
            maxIndex = i;
        }
    }   
    

        // Swap the smallest and largest elements
        swap(arr[minIndex], arr[maxIndex]);
        cout << "After swapping smallest and largest elements: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }   
    return 0;
}   