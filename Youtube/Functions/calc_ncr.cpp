#include<iostream>
using namespace std;

int factorial(int n) {
int fact = 1;

for(int i=1; i <= n; i++) {
fact *= i;
}
return fact;
}

int nCr(int n, int r){
int fact_n = factorial(n);
int fact_r = factorial(r);
int fact_nmr = factorial(n-r);

return fact_n / (fact_r * fact_nmr); // nCr = n! / (r! * (n-r)!)
}

int main(){
    int n = 5, r = 2;
    cout<<"nCr of "<<n<<" and "<<r<<" is: "<<nCr(n, r)<<endl;

    n = 10, r = 3;
    cout<<"nCr of "<<n<<" and "<<r<<" is: "<<nCr(n, r)<<endl;

    n = 7, r = 0;
    cout<<"nCr of "<<n<<" and "<<r<<" is: "<<nCr(n, r)<<endl;

    return 0;
} 