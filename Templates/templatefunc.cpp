#include <iostream>
using namespace std;

template<class T> // you can use template<typename T> as well
void print(T n) {cout<<"template version: "<<n<<endl;}

template<class T> 
void show() {cout<<T()<<endl;}


void print(int value) {cout<<"non-template version: "<<value<<endl;}

int main() {
	print<int>(5);
	print<string>("hello world");
//compiler can infer the type if you don't mention it
	print(6); //this will take the non- template function
	print<>(6); //template version
show<double>(); //here, since there are no arguements for show(), you have to mention the argument or else compiler will not infer automatically
	return 0;

}