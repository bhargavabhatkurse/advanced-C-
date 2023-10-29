#include <iostream>
#include <vector>
using namespace std;

int main() {


vector<double> numbers(20);  ///vector<double> numbers(20,1) this will have vector of size 20,possibly capacity will also be 20 and all the elements as 1

cout<< "size"<<numbers.size()<<endl;

int capacity = numbers.capacity(); //capacity is the size of internal array.
cout<<"capacity"<<numbers.capacity()<<endl;

for (int i = 0; i < 10000; ++i)
{
if(numbers.capacity() != capacity) {
	capacity = numbers.capacity();
	cout<<"capacity"<<numbers.capacity()<<endl; //capacity increases exponentially becuase it allocates more memory so that it doesnt need to allocate memory each time. this means we trade memory space for time.
     }
//size is number of elements , capacity is the total memory

	numbers.push_back(i);
}

numbers.clear();
cout<< "size"<<numbers.size()<<endl;
cout<<"capacity"<<numbers.capacity()<<endl; //size becomes 0 but capacity doesnt change


numbers.resize(100);
cout<< "size"<<numbers.size()<<endl;
cout<<"capacity"<<numbers.capacity()<<endl;	//resize 

numbers.reserve(100000); //reserves more memory thus increasing the capacity without changing the size
cout<< "size"<<numbers.size()<<endl;
cout<<"capacity"<<numbers.capacity()<<endl;	


	return 0;
}

//when you add an element to the vector, the vector class makes another array and then copies all the elements along with the new element to a new array.