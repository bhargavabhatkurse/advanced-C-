
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

map<string, vector<int> >scores;

scores["sue"].push_back(10);
scores["sue"].push_back(10);
scores["sue"].push_back(10);
scores["bhar"].push_back(20);
scores["mike"].push_back(30);
scores["sruj"].push_back(70);


for (map<string, vector<int> >::iterator i = scores.begin(); i != scores.end() ; ++i)
{
	string name = i->first;
	vector<int> scoreslist = i->second;

	cout<<name<<endl;

	for (int i = 0; i < scoreslist.size(); ++i)
	{
		cout<<scoreslist[i]<<" ";
	}
	cout<<endl;
}

return 0;
}

