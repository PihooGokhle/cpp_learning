# include<iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a no.: ";
    cin >> n;

    int num = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    cout << "After pattern: " << num << endl;
    return 0;
}