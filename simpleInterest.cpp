#include <iostream>
using namespace std;

int main() {

int p, r, t;

cout << "Enter principal amount: ";
cin >> p;

cout << "Enter rate: ";
cin >> r;

cout << "Enter time: ";
cin >> t;

int simpleInterest = (p * r * t) / 100;

cout << "Simple Interest: " << simpleInterest << endl;

return 0;
}
