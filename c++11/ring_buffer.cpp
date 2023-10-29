#include <iostream>
using namespace std;

//if you insert another value at the end of the buffer it will replace it with the first value
//ring buffer

template<class T>
class ring {
	int pos; //pos of the array
	T *m_values; //this will be an array
	int m_size; //size of the array
public: 
	ring(int size): pos(0),m_size(size),m_values(NULL) {
		m_values = new T[size];
	}
	~ring() {
		delete [] m_values;
	}

	int size() {return m_size;}

	void add(T value)
	{
		m_values[pos]= value;
		pos++;

		if(pos == m_size)
			pos = 0;
	}

	T &get(int i) {return m_values[i];}

};



int main() {


ring<string> textring(3);

textring.add("one");
textring.add("two");
textring.add("three");
textring.add("four");
textring.add("five");

for (int i = 0; i < textring.size(); ++i)
{
	cout<<textring.get(i)<<endl;
}


	return 0;
}
