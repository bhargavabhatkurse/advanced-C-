#include <iostream>
#include <fstream>
using namespace std;


#pragma pack(push, 16) //if you don't do packing with this preprocessor it will pad the structure by adding two more bytes. so instead of 62, it will be 64
struct person {
char name[50]; // don't use string as string don't store the value directly in the variable. It has a pointer and through that it allocates memory using new operator. so if you open it with a differnt copy of the program, its not going to the same meory location
int age;
double weight;
};

#pragma pack(pop)

int main() {



cout<<sizeof(person)<<endl;

	return 0;
}

//when we declare a variable, they are stored in stack.