# include<iostream>
# include<vector>
using namespace std;

int main() {

vector<int> vec; 

vec.push_back(6);
vec.push_back(12);
vec.push_back(18);
vec.push_back(17);
vec.push_back(8);
vec.push_back(48);
vec.push_back(58);
vec.push_back(3);
vec.push_back(48);


cout << "Size: " << vec.size() << endl;

cout << "capacity: " << vec.capacity() << endl;


return 0;
}