#include <iostream>
using namespace std;


//exceptions can be thrown from constructors
class cangowrong {


public: cangowrong() {
	char *memory = new char[999999999999999999];
	delete [] memory;
}
};
int main() {
try {
cangowrong wrong;
	}

catch(bad_alloc &e) {  //object of the class bad_alloc needs to be catched using reference
	cout<<"Caught exception: "<<e.what()<<endl;

}

cout<<"still running";
	return 0;

}
