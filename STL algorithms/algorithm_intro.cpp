#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//searching algorithm
int main() {
vector<int> vec{3,4,5,2,6,1};

vector<int>::iterator it = find(vec.begin(),vec.end(),4); //you can use 'auto'

if(it == vec.end())
	cout<<"not found";
else 
	cout<<"found";

	return 0;
}
