#include<iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++ ) {
            cout << j << " "; //If want to print the same number in the entire row use i 
                            //If want to increase the number in each column use j
        }
        cout << endl;
    }
    return 0;
}