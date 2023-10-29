#include <iostream>
using namespace std;


void wrong() {

	bool error = false;
	bool error2 = true;
if(error) {
	throw "something went wrong";
}

if(error2) {      //if var error was true, error 2 will not be executed 
	throw string("something else went wrong");   //this is like an throwing an object from the class string
}
}
void gowrong() {
	wrong();
}

int main() {
try {
gowrong(); // nesting functions 
}
catch(int e) {

	cout<<"error code: "<<e;
}
catch(char const* con) {
	cout<<"error code: "<<con;

}
catch(string &e) {                        //normally we don't use return by reference as most of the time, it is gone out of the scope.
	cout<<"estring error message: "<<e;
}

	return 0;
}
//line no:14 will be cleaned up later by the compiler. (as it is an object)

//errors get passed through functions

//when you throw something out of the function, the function stops executing and you need to catch it.

//generalised catch(...)