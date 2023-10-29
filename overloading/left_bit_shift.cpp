

// << operator - bit shift operator. has left-right associativity
#include <iostream>
using namespace std;

class test{
	int id;
string name;
public: test(): id(0), name("string") {}
		test(int id, string name): id(id), name(name) {}
		void print() {cout<<id<<" "<<name<<endl;}

		

		test(const test &other) {
			id = other.id; name = other.name; 
			
		}
		//ostream because cout is of ostream and & because we need to send the reference of the object
	//cout is not an obj of the your class so you can't define it in the class
	friend ostream &operator<<(ostream &out, const test &other) //declaring friend as it wants to access priv data members of the class
	{
		out<<other.id<<" "<<other.name;
		return out;
	}

	//here we are overloading << for cout's own class not for our class
}; 

int main() {

test test1(10,"mike");
test test2(20,"bhar");


cout<<test1<<test2<<endl; 
//--------- 
//this part will be done first. left-right associativity

//cout<<test1 will change into something like operator<<(cout,test1);


	return 0;
}