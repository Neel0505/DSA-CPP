#include<iostream>
using namespace std;

double sum(double a, double b){
    return a+b;
}

int main(){
    double x = 5, y = 10.5;
    cout<<sum(x, y)<<endl;
    return 0;
}