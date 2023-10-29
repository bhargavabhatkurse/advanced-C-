#include <iostream>
using namespace std;

class complex {
double real;
double imag;
public: complex(): real(0),imag(0) {}
		complex(double real, double imag): real(real),imag(imag){}
		complex(const complex &other) {
			cout<<"copy constructor: "<<endl;
			real = other.real; imag = other.imag;
		}

	const complex &operator=(const complex &c1)
		{
			cout<<"assignment is running"<<endl;
			real = c1.real; imag = c1.imag;
			return *this;
		}

double getreal() const {return real;}
double getimag() const {return imag;}


};

ostream &operator<<(ostream &out, const complex &c) {
	out<<"( "<<c.getreal()<<", "<<c.getimag()<<" )"<<endl;
	return out;
}
int main() {

complex c1(2,3);
complex c2 = c1;//copy constructor
c1 = c2; //assignment overloading


cout<<c1<<endl; // << overloading
	return 0;
}