#include <iostream>
#include <set>
using namespace std;


int main() {
set<int> number;

number.insert(10);
number.insert(30);
number.insert(30); //duplicates will not be copied in the set
number.insert(70);
number.insert(50);

for (set<int>::iterator i = number.begin(); i != number.end(); ++i)
{
	cout<<*i<<endl;
}

//finding a number
set<int>::iterator i = number.find(30);
if(i !=  number.end()) cout<< "found "<<*i<<endl;

// simpler way of finding
if(number.count(30)) cout<<"found "<<endl;


	return 0;

}