#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout<<"Factorial of 5 is: "<<factorial(5)<<endl;
    cout<<"Factorial of 10 is: "<<factorial(10)<<endl;
    cout<<"Factorial of 1 is: "<<factorial(1)<<endl;

    return 0;
}