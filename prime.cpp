# include<iostream>
using namespace std;

int main() {

    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2; i <= n-1; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout << "prime no.";
    }
    else{
        cout << "non prime no.";
    }

    return 0;
}