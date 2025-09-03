# include<iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a no.: ";
    cin >> n;

    char ch = 'A';
    for(int i  = 0; i < n; i++){
        ch += i;
        for(int j = 0; j < i+1; j++){
            cout << ch << " ";
            if(ch != 'A'){
                ch--;
            }
        }
        cout << endl;
    }

    return 0;


}