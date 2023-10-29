#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>
using namespace std;

//sort works on all datatypes(including user defined)
//internally, sort uses Introsort whch is combination of quicksort, heapsort and insertion sort

class point {
public:
		int x;
		int y;
		point(int x=0,int y = 0): x{x},y{y} {}
	    
	    bool operator < (const point& p1) const {
			return (x+y)<(p1.x+p1.y);
		}


};

//function oject
struct {
	bool operator()(int a, int b){
		return a<b;
	}
}customless;


int main() {
//this is built in datatype
vector<int> vec{3,4,5,2,6,1};
sort(vec.begin(),vec.end()); //sort(execution::par,vec.begin(),vec.end()); //parallel processing(video later)

for(auto elm: vec)
	cout<<elm<<endl;
//

//user defined datatype

std::vector<point> vec1{{4,4},{5,1},{10,1}};
sort(vec1.begin(),vec1.end());

for(auto el: vec1)
	cout<<el.x<<" "<<el.y<<endl;

//using function object
//A function object or functor, is any type that implements operator().

vector<int> vec2{3,4,5,2,6,1};
sort(vec2.begin(),vec2.end(),customless);

for(auto elm: vec2)
	cout<<elm<<endl;

cout<<endl;
//using lambda expressions
vector<int> vec3{3,4,5,2,6,1};
sort(vec3.begin(),vec3.end(),[](int a,int b) {return a<b;});

for(auto elm: vec3)
	cout<<elm<<endl;
	return 0;
}
