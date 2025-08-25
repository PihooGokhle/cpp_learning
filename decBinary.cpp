# include<iostream>
using namespace std;

int dectoBinary(int n) {

    int ans = 0;
    int pow = 1;

    while(n > 0){
        int rem = n % 2;
        n /= 2;
        
        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
}        

    int main() {

        int n;

        cout << "Enter a no.: ";
        cin >> n;

        cout << dectoBinary(n) << endl;

        cout << " " << endl;

        for(int i=1; i<=10; i++){
            cout << dectoBinary(i) << endl;
        }

        return 0;
    }
