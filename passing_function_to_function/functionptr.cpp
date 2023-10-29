#include <iostream>
using namespace std;

void test() {
	cout<<"hello "<<endl;
}

void test(int i) {
	cout<<i<<endl;
}
int main() {
	test(7);
	void (*ptr)(); //brackets around the ptr is necessary because or else compiler will think it returns a void pointer. 
	ptr= &test; // we don't need () because () is used for function call.
		 //if you don't put &, it will work because the name of the function is a pointer to its address.	
	(*ptr)(); //just ptr() if you dont put & .

void (*ptr1)(int) = test; //we don't need to put the name of the parameter, just the type.
(*ptr1)(3);
   

	return 0;
}