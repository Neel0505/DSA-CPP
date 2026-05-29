#include<iostream>
using namespace std;

int sumdigits(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10; //get the last digit
        n /= 10; //remove the last digit
    }
    return sum;
}

int main(){
    cout<<"Sum of digits of 123 is: "<<sumdigits(123)<<endl;
    cout<<"Sum of digits of 456 is: "<<sumdigits(456)<<endl;
    cout<<"Sum of digits of 789 is: "<<sumdigits(789)<<endl;
    return 0;
}