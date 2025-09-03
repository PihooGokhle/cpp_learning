#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end =  size - 1;
    
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {

    int arr[] = {8, 7, 6, 5, 4, 3, 2};
    int size = 7;

    reverseArray(arr, size);
    for(int i=0; i<size; i++){
        cout << arr[i] << endl;
    }

    return 0;
}