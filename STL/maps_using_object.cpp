#include <iostream>
#include <map>
using namespace std;

class Person {
private: 
	string name;
	int age;
public:
    Person(): name(" "), age(0) { }

    Person(const Person &other)   //copy constructor
     {cout<<"copy constructor is running"<<endl;
     	name = other.name; age = other.age; }   

	Person(string name, int age): name(name), age(age) { }    //when you create your own constructor, you need to provide default parameterless constructor
	void print() {cout<<name<<" "<<age<<endl;}   
};


int main() {


	map<int,Person> people;
	people[0] = Person("mike", 02);   //intialising manually

	people[2] = Person("me", 22);

	people[1] = Person("mik", 01);

	people.insert(make_pair(55, Person("sue", 45))); //initalising using copy constructor

	for(map<int, Person>::iterator i = people.begin(); i != people.end() ; ++i)
	{
		cout<<i->first;  //map will always sort according to the key. not on the order in which you write the codee. line 21-25

		i->second.print();
	}
	
/*
C++ Notes: Shallow vs Deep Copies
A shallow copy of an object copies all of the member field values. This works well if the fields are values, but may not be what you want for fields that point to dynamically allocated memory. The pointer will be copied. but the memory it points to will not be copied -- the field in both the original object and the copy will then point to the same dynamically allocated memory, which is not usually what you want. The default copy constructor and assignment operator make shallow copies.

A deep copy copies all fields, and makes copies of dynamically allocated memory pointed to by the fields. To make a deep copy, you must write a copy constructor and overload the assignment operator, otherwise the copy will point to the original, with disasterous consequences.

Deep copies need ...
If an object has pointers to dynamically allocated memory, and the dynamically allocated memory needs to be copied when the original object is copied, then a deep copy is required.

A class that requires deep copies generally needs:

A constructor to either make an initial allocation or set the pointer to NULL.
A destructor to delete the dynamically allocated memory.
A copy constructor to make a copy of the dynamically allocated memory.
An overloaded assignment operator to make a copy of the dynamically allocated memory.
Copyleft 2004 Fred Swartz MIT License

 */

//when you use assignment to initialise like on line 21, it makes shallow copies which is fine but it will be a problem if the there's a pointer in the class as it will copy the pointer but not the memory where it is pointing to


	return 0;

}