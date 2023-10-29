/*[[Deprecated]]
----------------
1.0 Deprecated means use of the name or entity declared with this attribute is allowed, but discouraged for some reason.
2.0 Compiler gives warnings and if string literals(reason for deprecation) are provided they are included in warnings.

LIST WHAT CAN BE DEPRECATED:
class, struct, union
typedef
variable
non-static data member
function 
namespace
enumeration 
enumerator
template specialization*/



//we deprecate a function if we don't want to use it in the next release of the software or 
// if there is a better function to do it in the program

#include <iostream>
using namespace std;


[[deprecated("this function will be replaced with a template function")]]
int add(int a, int b) {
	return a+b;
}
int main() {
	cout<<add(1,2);


	return 0;
}
