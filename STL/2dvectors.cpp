#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<vector<int> >sample;

for (int i = 0; i < 3; ++i)
 {   vector<int> temp;
 for (int j = 0; j < 3; ++j)
 {
 	temp.push_back(i);
 }
 sample.push_back(temp);
}

//display

for (int i = 0; i < sample.size(); ++i)
{
	for (int j = 0; j < sample[i].size(); ++j)
	{
		cout<<sample[i][j];
	}
	cout<<endl;
}

	return 0;
}