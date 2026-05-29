#include<iostream>
using namespace std;

int sumNums(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    cout<<"Sum of first 10 numbers is: "<<sumNums(10)<<endl;
    cout<<"Sum of first 100 numbers is: "<<sumNums(100)<<endl;
    cout<<"Sum of first 5 numbers is: "<<sumNums(5)<<endl;

    return 0;
}