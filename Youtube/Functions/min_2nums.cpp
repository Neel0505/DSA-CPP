#include<iostream>
using namespace std;

int min(int a, int b){  //parameters
    if (a < b){
        cout<<"a is smaller = "<<a<<endl;
        return a;
    }
    else{
        cout<<"b is smaller = "<<b<<endl;
        return b;
    }
}

int main(){
    int a = 5, b = 10; //arguments
    int x = 7, y = 3; //arguments
    min(a, b);
    min(x, y);
    return 0;
}
