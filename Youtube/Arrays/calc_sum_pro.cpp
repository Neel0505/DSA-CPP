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
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i]; // Add each element to the sum
    }
    cout<<"The sum of the elements in the array is: "<<sum<<endl;

    int product = 1;
    for(int i=0; i<n; i++){ 
        product *= arr[i]; // Multiply each element to the product
    }
    cout<<"The product of the elements in the array is: "<<product<<endl;   
    return 0;
}