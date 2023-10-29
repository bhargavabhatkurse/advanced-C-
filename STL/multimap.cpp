#include <iostream>
#include <map>
using namespace std;

int main() {

multimap<int,string>lookup;

lookup.insert(make_pair(30,"Mike")); //use .insert to add value because it doesn't have the array like adding thing(idk how to define it).
lookup.insert(make_pair(10,"Vicky"));
lookup.insert(make_pair(30,"raj")); //in multimap, it stores values with the same key
lookup.insert(make_pair(40,"bhar"));

for (multimap<int,string>::iterator i  = lookup.begin(); i != lookup.end() ; ++i)
{
	cout<<i->first<<" "<<i->second << endl;
		
}
cout<<endl;

// for (multimap<int,string>::iterator i  = lookup.find(10); i != lookup.end() ; ++i) // if you use find(), its gonna find the element but will also print the next elements until the end is reached.
//{}
pair<multimap<int,string>::iterator/* this will store the start of the iterator*/, multimap<int,string>::iterator /* this will store the end of the iterator*/> its = lookup.equal_range(30);

for (multimap<int,string>::iterator i = its.first; i != its.second ; ++i)
{
	cout<<i->first<<" "<<i->second << endl;
		
}


// using keyword auto
auto its2 = lookup.equal_range(30);

for (multimap<int,string>::iterator i = its2.first; i != its2.second ; ++i)
{
	cout<<i->first<<" "<<i->second << endl;
		
}

	return 0;
}