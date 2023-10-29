#include <iostream>
using namespace std;

template<class T>
class test {
	T obj;
public: test(T obj) {this->obj = obj;print();}
		void print() {cout<<obj<<endl;}


//'this' is a pointer which holds the address of the current obj and is a const pointer


};
int main() {
	test<string> test1("hello");


	





	return 0;

}