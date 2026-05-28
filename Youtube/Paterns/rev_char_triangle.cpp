#include<iostream>
using namespace std;

int main() {
    int n = 4;
    char ch = 'A';
    for(int i=1; i<=n; i++) { //outer loop
        for(int j=i; j>=1; j--) { //inner loop
            cout << (char)(ch + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}