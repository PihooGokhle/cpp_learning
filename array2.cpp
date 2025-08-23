#include <iostream>
#include <climits>
using namespace std;

int main() {

    int marks[] = {5, 10, 15, 20, 25, 30};
    int size = 6;
    
    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(marks[i]<smallest){
            smallest = marks[i];
        }
    }

    cout << "Smallest: " << smallest << endl;
}