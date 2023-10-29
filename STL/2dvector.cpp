#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<vector<int> >sample(4,vector<int>(4,1));


sample[2].pushback(8) // this will make one row longer than the others. All the rows don't need to be equal like in arrays.

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

