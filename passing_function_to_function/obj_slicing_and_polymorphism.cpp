#include <iostream>
#include <vector>
using namespace std;


/*ote on polymorphism
there are two types of polymorphism
run time and compile time polymorphism
run time: using virtual functions
compile time: using function and operator overloading
we declare base class functions as virtual to be able to access derived class functions with same prototype
in order to access virtual functions you need to create a ptr;
base class pointer can be used for derived class but the reverse is not true.*/


class parent {
	int one;
public: virtual void print() {cout<<"parent "<<one<<endl;}
	    virtual ~parent() {}
	    parent(): one(0) {} //once we define a copy constructor,we need to refine the default constructor
	    parent(const parent &other): one(0) {
	    	one = other.one;
	    	cout<<"copy constructor"<<endl;}
};

class child: public parent {
int two;

public: child(): two(10) {}
	void print() {
	cout<<"child "<<two<<endl;
}
};


int main() {

	child c1;
	c1.print();
	parent *p1 = &c1; //or you can do parent &p1 = c1;
	p1->print();      // p1.print();

parent p2 = c1;
p2.print();

//in obj slicing, the child part from the obj will get sliced away and only the parent will remain.





	return 0;

}

 
