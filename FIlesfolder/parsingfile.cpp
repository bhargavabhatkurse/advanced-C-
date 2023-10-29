#include <iostream>
#include <fstream>
using namespace std;

int main() {

ifstream input;

string name = "text.txt";

input.open(name);

if(!input.is_open())
return 1;

while(input)
{

	string line;
	getline(input,line,':');

	int population;
	input>>population;

input.ignore(); //or you can use input.get() . it is because the getline is also taking in the \n character which puts another blank line on the console 
//instead of using input.get() because there are can be more whitespace characters.

//we can use this in C++ 11 :        input>> ws;

	if(!input) { //we need this because in case of the 3rd line which doesn't exist, the previous population is integer is printing again.
		break;
	}
	cout<<"'"<<line<<"'"<<"...."<<"'"<<population<<"'"<<endl;

}

input.close();





return 0;
}