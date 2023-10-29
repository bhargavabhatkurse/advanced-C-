#include <iostream>
using namespace std;

//final note: if you have overloaded an operator, its better to put a copy constructor and destructor as well. #rule of 3
class test {
int id;
string name;
public: test(): id(0), name("string") {}
		test(int id, string name): id(id), name(name) {}
		void print() {cout<<id<<" "<<name<<endl;}

		const test &operator=(const test &other) {
			id = other.id; name = other.name;
			cout<<"assignment is running";
			return *this;
		}

		test(const test &other) {
			id = other.id; name = other.name; //other way of doing this is *this= other;
			cout<<"copy constructor is running"; 
		}
}; 

int main() {

test test1(10,"mike");
test1.print();

test test2(20,"bob");
test2 = test1;  //this is doing shallow copy. this might not always be desirable if the class has a pointer or maybe you don't want the id to be copied but only the name
test2.print();

//another way of doing test3=test2;
test test3;
test3.operator=(test2);
test3.print();

//here copy initialisation is taking place
//overloaded assignment operator will not be used if test4 is not intialised before
//copy constructor is used in this case

test test4 = test1;
test4.print();


	return 0;
}