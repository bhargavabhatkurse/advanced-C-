#include <iostream>
#include <map>
using namespace std;

int main() {

map<string, int> ages; //this map has string for a key and int for the name

ages["Mike"] = 30;
ages["Raj"] = 40;
ages["Vicky"] = 50;

cout<<ages["Raj"] <<endl;

ages["Mike"] = 70;

//to insert a pair in a differnt way
pair<string,int> addtomap("Peter",100);
ages.insert(addtomap);
	//or
ages.insert(pair<string,int>("Peter",100)); //instead of declaring pair with the datatypes, you can write make_pair("peter",100);


cout<<ages["sue"] <<endl; // sue is not there so the value is set to 0

//to test the value if it is in the map
if (ages.find("Vicky") != ages.end())
{
	cout<<"found";
}
else cout<<"not found";




for (map<string, int>::iterator i = ages.begin(); i != ages.end() ; ++i)
{
	cout << i->first<<" "<< i ->second<<endl;
}

//another way of displaying maps
for (map<string, int>::iterator i = ages.begin(); i != ages.end() ; ++i)
{
	pair<string,int> age = *i;
	cout << age.first<<" "<< age.second<<endl;

}

return 0;
}