
#include <iostream>
#include <queue>
using namespace std;

class test {
string name;
public: test(string name): name(name) {}
		//~test() {cout<<"destroyed"<<endl;}
		void print() {cout<<name<<endl;}
};

int main() {

queue<test> testqueue;

testqueue.push(test("Mike")); 
testqueue.push(test("sue"));
testqueue.push(test("john"));



while(testqueue.size() > 0)
{	test &test1 = testqueue.front(); 
	test1.print();  
	testqueue.pop();
}
	  
//to print the last element
testqueue.back().print(); 
	return 0;
	}


