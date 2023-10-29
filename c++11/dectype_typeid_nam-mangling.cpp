#include <iostream>
#include <typeinfo> //better to include this

using namespace std;

struct name {
	string inter;
};

int main() {
	int value;
	double doubl;
	name str;
	cout<< typeid(value).name()<<endl;
	cout<< typeid(doubl).name()<<endl;
	cout<< typeid(str.inter).name()<<endl;

//name mangling is compiler changing the name of the function to something else
//function overloading is also achieved with name mangling

decltype(str.inter) name = "bob";
cout<<name;



	return 0;
}
