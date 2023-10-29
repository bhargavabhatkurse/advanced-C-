#include <iostream>
#include <map>
using namespace std;

class Person {
private: 
	string name;
	int age;
public:
    Person(): name(" "), age(0) { }
 
 
    Person(string name, int age): name(name), age(age) { }    
	void print() const {cout<<name<<" "<<age<<endl;}    //this has to be const, because this function might change the keys of the map and the maps doesn't want that

	//we need to overload because map needs to compare the keys in order to arrange them in the right order.
	bool operator<(const Person &other) const { // other is an object with which the main object will be compared. Const so that other should not be changed by the operator overloading. and Other const outside so that the original object should also not be changed
		return age <other.age;

	}
};


int main() {


	map<Person,int> people;
	people[Person("mike", 02)] = 40 ;   //intialising manually
	//people[Person("mike", 02)] = 90 ; if you define another obj with same key, map will update the value. but if key is changed, key will not be updated

	people[Person("raj", 01)] = 20 ; 

	people[Person("sue", 05)] = 30 ; 

	for(map<Person, int>::iterator i = people.begin(); i != people.end() ; ++i)
	{
		cout<<i->second;  //value
 
		i->first.print(); //key   
		cout<<endl;
	}
	
//for inbuilt datatypes like string, int map knows to compare but for user defined datatypes, you need to tell how to compare.


	//internally, map is a binary tree

	return 0;
}