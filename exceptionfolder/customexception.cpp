#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception {

public: virtual const char* what() const throw() { //const throw() means this function cannot throw an exception. this will help the compiler to optimise. run-time checking, not compile time checking
			return "something bad happened!";
}


};

class Test {
public: void goeswrong() {  //if you write public: void goeswrong() throw() {} then it will not not throw the exception back from the class Test.
	throw myexception();
}
};

int main() {
Test test;
try{

	test.goeswrong();

}
catch(myexception &e) {
cout<<e.what()<<endl;
}


	return 0;
}