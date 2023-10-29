#include <iostream>
#include <vector>
using namespace std;

int main() {


vector<string> strings;
//vector resizes one its own'  you can presize as well vector<string> strings(5);
//strings[3] = "dog";

strings.push_back("one");
strings.push_back("two");
strings.push_back("three");

for (int i = 0; i < strings.size(); ++i)
{
	cout<<strings[i]<<endl;
}


//cout<<strings.size();


//vector<string>::iterator it = strings.begin();
//it++;
//cout<<*it<<endl;

//building a for loop to iterator through the vector

for (vector<string>::iterator it = strings.begin(); it != strings.end(); ++it) // vector.end() gives iterator to the element next to the final element
{
	cout<<*it<<endl;
}


vector<string>::iterator it = strings.begin();
it += 2;
cout<<*it<<endl;

	return 0;
}


//  practicing:  for(vector<strings>::iterator it = strings.begin(); it!= strings.end(); it++)