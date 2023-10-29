#include <iostream>
#include <vector>
using namespace std;

int main() {

auto texts = {"one", "two", "three"}; // no need to do char texts[] = {"one", "two", "three"}

//new for loop
for(auto text: texts)
	cout<<text<<endl; //this is simpler


vector<int> numbers;
numbers.push_back(5);
numbers.push_back(6);
numbers.push_back(7);
numbers.push_back(8);

for(auto number: numbers)
	cout<<number<<endl;

/*for (std::vector<int>::iterator i = numbers.begin(); i != numbers.end(); ++i)
{
	cout<<*i<<endl;
}*/

return 0;
}

