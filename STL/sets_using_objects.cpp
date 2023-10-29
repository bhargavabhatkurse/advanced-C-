
#include <iostream>
#include <set>
using namespace std;

class test {
	int i;
	string name;
	public: test(int i, string name): i(i), name(name) {}
	void print() const {cout<<i<<" "<<name<<endl;}

	bool operator<(const test &other) const {
		return i < other.i;
	}



};


int main() {

set<test> tests;
tests.insert(test(30,"mike"));
tests.insert(test(20,"ke"));
tests.insert(test(10,"ike"));

for (set<test>::iterator i = tests.begin(); i != tests.end(); ++i)
{
	i->print();

}





	return 0;

}