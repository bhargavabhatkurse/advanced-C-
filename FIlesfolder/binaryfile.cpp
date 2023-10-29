#include <iostream>
#include <fstream>
using namespace std;


#pragma pack(push, 1)
struct person {
char name[50];
int age;
double weight;
};

#pragma pack(pop)

int main() {



person someone = {"bhargava",18,70};

string name = "text.bin";


// reading Binary file
ofstream outfile;
outfile.open(name, ios::binary);

if(outfile.is_open()) {

	//     outfile.write((char*)&someone,sizeof(someone)); // this is old way of casting the pointers
      outfile.write(reinterpret_cast<char *>(&someone),sizeof(person));


	
	outfile.close();
}
else cout<<"could not open the file" + name;


//printing binary files

person someone1 = {};
ifstream infile;
infile.open(name, ios::binary);

if(infile.is_open()) {

	//     outfile.write((char*)&someone,sizeof(someone)); // this is old way of casting the pointers
      infile.read(reinterpret_cast<char *>(&someone1),sizeof(person));


	
	outfile.close();
}
else cout<<"could not open the file" + name;


cout<<someone1.name<<endl<<someone1.age<<endl<<someone1.weight;

return 0;
}