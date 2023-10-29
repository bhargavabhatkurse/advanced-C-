

/*1. Using an auto return type in C++14, the compiler will attempt to deduce the type for you. 
   a. auto 
   b. decltype(auto)*/

/* decltype(auto) means give me the type as declared, not deduced by value
   auto means deduced by value
*/

#include <iostream>
using namespace std;


decltype(auto)increment(int &a) {a++; return a;} //instead of decltype(auto), we can use auto&
// if you just put auto it will give an error because auto will just return int but you need &int
int main() {

int p = 10;
int& y = increment(p); 
cout<< p << endl;
cout<< y << endl;





	return 0;
}