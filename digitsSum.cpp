#include <iostream>
using namespace std;
 
int digitSum(int n) {
    int sum = 0;
    while(n > 0){
        int digits = n % 10;
        sum += digits;
        n = n / 10;
    }
    return sum;
}

int main() {

    int n;

    cout << "Enter a no.: ";
    cin >> n;

    cout << digitSum(n) << endl;

    return 0;
}