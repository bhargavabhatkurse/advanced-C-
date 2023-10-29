#include <iostream>
#include <exception>
using namespace std;

void gowrong() {
	bool error1 = true;
	bool error2 = false;

	if(error1) {
		throw bad_alloc();
	}

	if(error2) {
		throw exception();
	}
}
int main() {
try {
	gowrong();
}

catch(bad_alloc &e) {       //if you put this second, this error will be caught by the previous exception error beacause bad_alloc is in the class expection therefore it needs to be put before the expection catch
cout<<e.what()<<endl;
}

catch(exception &e) {
cout<<e.what()<<endl;
}


	return 0;
}

//always but the subclass first