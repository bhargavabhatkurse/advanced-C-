
#include <iostream>
#include <vector>
using namespace std;

class test {
string name;
int id;

public: test(string name, int id): name(name), id(id) {}
		void print() {cout<<name<<" "<<id<<endl;}
		//~test() {cout<<"destoryed";}
		
	// bool operator<(const test &other) const {return name < other.name;}

		friend bool comp(const test &a, const test &b);
};

bool comp(const test &a, const test &b) {
	
	return a.name < b.name;

}

int main() {

	vector<test> tests;
	tests.push_back(test("mike", 5));
		tests.push_back(test("ike", 50));
			tests.push_back(test("mik", 500));

sort(tests.begin(),tests.end(), comp/*function pointer */);

for (vector<test>::iterator i = tests.begin() ; i != tests.end(); ++i)
{
	i->print();
}

return 0;
}

