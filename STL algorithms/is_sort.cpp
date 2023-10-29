#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//searching algorithm
int main() {
vector<int> vec{3,4,5,2,6,1};
//ascending order is by default
sort(vec.begin(),vec.end());

for(auto el: vec)
	cout<<el<<endl;

cout<<is_sorted(vec.begin(),vec.end()); //1

cout<<endl;
//for descending
sort(vec.begin(),vec.end(),greater<int>());

for(auto el: vec)
	cout<<el<<endl;

cout<<is_sorted(vec.begin(),vec.end(),greater<int>()); //1 (it will return 0 if you dont put greater<int>() for descending order )
	return 0;
}
