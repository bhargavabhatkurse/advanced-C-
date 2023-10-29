#include <iostream>
#include <fstream>
using namespace std;

int main() {

ifstream infile;
string infilename = "text.txt";

infile.open(infilename);

if(infile.is_open()) 
{
	string line;
	while(!infile.eof()) // while(infile) also works 
	{getline(infile,line);
	cout<<line<<endl;
    }




	infile.close();
}

else cout<<"cannot open the file: "<<infilename;

	return 0;
}