
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class test {
string name;
public: test(string name): name(name) {}
		//~test() {cout<<"destroyed"<<endl;}
		void print() {cout<<name<<endl;}
};

int main() {

stack<test> teststack;

teststack.push(test("Mike")); //this puts the name on the stack and destroys the original object . that's why you see all three destroyed 
teststack.push(test("sue"));
teststack.push(test("john"));

/*
test &test1 = teststack.top(); //better to give it as a ref. test &test1 = teststack.top()
teststack.pop();
test1.print();   //this refers to the destroyed object but still works
*/

/*
test test2 = teststack.top(); //assignging with = without ref makes a shallow coppy
test2.print();
*/

while(teststack.size() > 0)
{	test &test1 = teststack.top(); 
	test1.print();  //this will print in the reverse order of insertion as the top element is the last inserted element.
	teststack.pop();
}
	  



	return 0;
	}


