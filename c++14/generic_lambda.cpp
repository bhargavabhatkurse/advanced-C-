#include <iostream>
#include <string>
using namespace std;

int main() {
	
auto add = [](auto x,auto y) {return x+y;};
int a = 1, b =2;
cout<< add(a,b)<<endl;
// cout<< add(1,2); can't do this
//cout<<add("bhar","gava"); cant do this.
string a1 = "bhar" , b1 = "gava";
cout<<add(a1,b1);

	return 0;
}
