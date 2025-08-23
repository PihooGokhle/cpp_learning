#include <iostream>
using namespace std;

int factorial(int n){
int fact = 1;
for(int i=1; i<=n; i++){
    fact *= i;
}
return fact;
}

int binomial(int n, int r){
    if(r > n){
        return 0;
    }
    else{
        int result = factorial(n) / factorial(r) * factorial(n-r);
        return result;
    }
}

int main() {

    int n,r;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter r: ";
    cin >> r;

    cout << binomial(n,r) << endl;

    return 0;
}