#include <iostream>
using namespace std;

struct test {
	virtual bool operator()(string &text)=0;
	virtual ~test() {}

};
struct match: public test {
	bool operator()(string &text) {
			return text == "lion";
	}
};

void check(string &text,test &test) {
	if(test(text))

}
int main() {

match pred;
string value = "lion";

cout<<pred("lion")<<endl;





	return 0;
}