#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*0. partial_sort rearranges elements such that the range [first, middle) contains the sorted elements.
1. The order of equal elements is not guaranted to be preserved.
2. The order of remaining elements is unspecified.*/


//searching algorithm
int main() {
vector<int> vec{3,4,5,2,6,1};
//ascending order is by default
partial_sort(vec.begin(),vec.begin()+4,vec.end()-1);

for(auto el: vec)
	cout<<el<<endl;




	return 0;
}
