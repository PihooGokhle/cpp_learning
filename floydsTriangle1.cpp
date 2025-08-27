# include<iostream>
using namespace std;

int main() {

    int n;
    int num = 1;

    cout << "Enter a no.: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}