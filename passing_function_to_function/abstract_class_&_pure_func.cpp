#include <iostream>
using namespace std;
class shape {

	public: virtual void area()=0;
};

class circle: public shape {

	public: void area() { //if we don't define area again in the derived class, circle class will also become virtual
					//dont put any parameter or else area won't be overrided, it will be overloaded.
		int r;
		cout<<"enter radius"<<endl;
		cin>>r;
		cout<<"area "<<3.14*r*r<<endl;
	}
};

int main() {
	// shape obj; abstract can't be instantiated.

	circle c1;
	c1.area();

	return 0;
}