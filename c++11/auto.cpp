#include <iostream> 
using namespace std;

template<class T,class S>
auto test(T value, S sub)-> decltype(value + sub){ //if you use auto, you need put trailing return type
	return value;
}

int get(){
	return 999;
}
 
auto test2()->decltype(get()) { //you can use functions and expressions in decltype
return get();

}


int main() {

auto i = 7;
auto str = "string";
cout<<i<<"\n"<<str<<endl;
cout<<test(10, 12)<<endl;
cout<<test2()<<endl;



	return 0;
}