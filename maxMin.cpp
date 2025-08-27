#include <iostream>
#include <climits>
using namespace std;

// int smallest = INT_MAX;
// int smallest(){

// }
//     int largest = INT_MIN;

//     for(int i=0; i<size; i++){
//        smallest = min(marks[i], smallest);
//        smallestIndex = i;
//        largest = max(marks[i], largest);
//        largestIndex = i;
//     }

int main() {

    int marks[] = {5, 10, 15, 20, 25, 30};
    int size = 6;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){
       smallest = min(marks[i], smallest);
       largest = max(marks[i], largest);
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    return 0;
}