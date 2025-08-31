# include<iostream>
# include<vector>
using namespace std;

int main() {

vector<int> vec; 

cout << "Size: " << vec.size() << endl;

vec.push_back(6);
vec.push_back(12);
vec.push_back(18);
vec.push_back(24);

cout << "Size: " << vec.size() << endl;

vec.pop_back();

for(int i: vec){
    cout << i << endl;
}

return 0;
}