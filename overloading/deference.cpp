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

bool operator==(const complex &other) const {
	return (real == other.real && imag == other.imag);}
bool operator!=(const complex &other) const {
	return (!(real == other.real && imag == other.imag));}

complex operator*() const{ //implicit
return (complex(real, -imag));
}

};

ostream &operator<<(ostream &out, const complex &c) {
	out<<"( "<<c.getreal()<<", "<<c.getimag()<<" )"<<endl;
	return out;
}


complex operator+(const complex &a, const complex &b) //no ref for the operator because when we add complex no's together, we want a new number to be returned not the ref of old one.
{
	return(complex(a.getreal()+b.getreal(),a.getimag()+b.getimag()));

}
complex operator+(const complex &a, double b)//if we want to add a double value to the complex no
{
	return(complex(a.getreal()+b,a.getimag()));
}


int main() {
	complex c1(3,2);
	cout<<*c1<<endl;
	
/*“.” Member access or dot operator
“? : ” Ternary or conditional operator
 “::” Scope resolution operator
 “.*” Pointer to member operator
 “sizeof” The object size operator
 “typeid” Object type operator
*/
return 0;
}