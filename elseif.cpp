# include<iostream>
using namespace std;

int main() {

    int marks;
    cout << " enter marks : ";
    cin >> marks;

    if(marks >= 90) {
        cout << "A";
    }
    else if(marks >= 70){
        cout << "B";
    }
    else {
        cout << "C";
    }

    return 0;
}