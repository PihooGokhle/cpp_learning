# include<iostream>
using namespace std;

int main() {

    int n;
    char ch = 'A';

    cout << "Enter a no.: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}