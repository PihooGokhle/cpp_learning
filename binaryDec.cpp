# include<iostream>
using namespace std;

int binarytoDec(int n) {

    int ans = 0;
    int pow = 1;

    while(n > 0){
        int rem = n % 10;
        ans += (rem * pow);
        n /= 10;
        pow *= 2;
    }

    return ans;
}        

    int main() {

        int n;

        cout << "Enter a no.: ";
        cin >> n;

        cout << binarytoDec(n) << endl;

        return 0;
    }