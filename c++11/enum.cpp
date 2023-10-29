#include <iostream>
using namespace std;

//enum is used to group 
//by default its type is integer
//it is intialised to A = 0, B=1, C = 2 and so on on default 
enum example: int
{
//A=2,B,C here B will be 3 and C 4;
A,B,C

};

int main() {

example value = B;
cout<<value;



	return 0;
}