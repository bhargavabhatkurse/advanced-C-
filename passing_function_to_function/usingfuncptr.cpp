#include <iostream>
#include <vector>
#include <algorithm> //for count_if
using namespace std;

bool match(string name) {
return name.size() == 3;
}

int countstr(vector<string> &text, bool (*match)(string test)) {
	 int j = 0;
	for (int i = 0; i <text.size(); ++i)
	{

		if(match(text[i])) {cout<<text[i]<<endl;j++;}
	}
	return j;
}

int main() {
	vector<string >text;
	text.push_back("one");
	text.push_back("two");
	text.push_back("three");
	text.push_back("one");
	text.push_back("two");
	text.push_back("three");

cout<<match("two")<<endl; // this will return 1;
cout<<countstr(text,match)<<endl;

//cout<<count_if(text.begin(),text.end(),match)<<endl; //this is there in <algorithm>
			//starting 		ending	ptr to function 
	



	return 0;
}