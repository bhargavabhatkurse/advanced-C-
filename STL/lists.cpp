#include <iostream>
#include <list>
using namespace std;

int main() {

list<int> numbers;

numbers.push_back(1);
numbers.push_back(2);
numbers.push_back(3);
numbers.push_front(0);

list<int>::iterator i = numbers.begin();
i++; // to go to the next number, which is 1
//now to insert 100 after the number 0
numbers.insert(i,100);
cout<< "Element:"<< *i << endl; // iterator will still point at the number before insertion

list<int>::iterator eraseit = numbers.begin();
eraseit++; 
//numbers.erase(eraseit); //erase method invalidates the iterator
//cout<< "Element:"<< *eraseit << endl; // it will still print 100 even after it is erased

eraseit = numbers.erase(eraseit);  //this will print Element: 1 which is the next element after deleting 100
cout<< "Element:"<< *eraseit << endl;


for (list<int>::iterator i = numbers.begin() ; i != numbers.end(); ++i)
{
	cout<< *i << endl;
}







return 0;
}