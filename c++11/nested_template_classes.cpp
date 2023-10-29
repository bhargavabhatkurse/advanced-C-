#include <iostream>
using namespace std;

template<class T>
class ring {
public: 
	class iterator; //good to declare it here and define outside (it looks ugly otherwise)

};
template<class T>
class ring<T>::iterator {
	public: 
		void print() {cout<<"hello from iterator"<<endl<<T();} //T() will initialise int to 0
	};


int main() {

ring<int>::iterator it; //iterator is nested within ring. so we use :: to access iterator within ring
it.print();



	return 0;
}
