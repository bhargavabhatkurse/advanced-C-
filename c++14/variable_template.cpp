/*NOTES:
1. Before C++14 we had Function Template and Class Template, now we have Variable Template.
*/

#include <iostream>
using namespace std;


template<typename T>
 T pi = T(3.14152698038402092830);
	
int main() {
	// cout.precision(20); precision till 20 digits
	cout.precision(numeric_limits<long double>::max_digits10);  //his defines the accuracy of a long double  number in base 10.
	cout<<pi<int><<endl;
	cout<<pi<float><<endl;
	cout<<pi<double><<endl;
	cout<<pi<long double><<endl;



	return 0;
}