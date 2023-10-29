#include <iostream>
#include <fstream>
using namespace std;

int main() {

ofstream outFile;
string name = "text.txt";
outFile.open(name);

if(outFile.is_open()) {

	outFile<<"This is a line"<<endl;
	outFile<<"this is another line"<<endl;
	outFile<<123;
}

else cout<<"Could not open the file: "<<name;	

outFile.close();
	return 0;
}


//INSTEAD OF ofstream outFile;
//string name = "text.txt";
//outFile.open(name);

//we can use ios::out by using fstream