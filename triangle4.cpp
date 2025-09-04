# include<iostream>
using namespace std;

int main() {

int n;

cout << "Enter a no.: ";
cin >> n;

for(int i=1; i<=n; i++){
    int num = 1;
    for(int j=1; j<i+1; j++){
        cout << num << " ";
        num = num + 1;
    }
    cout << endl;
}
    return 0;
}