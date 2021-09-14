//var 1
#include <iostream>
using namespace std;

class FooString
{
	char* buf;

public:
	FooString(char* tbuf);
	~FooString() {};
	int length();
	void show();
	void TEST();
};
FooString::FooString(char* tbuf)
{
	this->buf = tbuf;
}

int FooString::length() {
	int i = 0;
	while (buf[i] != '\0') {
		i++;
	};
	cout << i;
	return i;
}
void FooString::show() {
	cout << buf << '\n' << "String length: ";
}
void FooString::TEST() {
	int x = 4;
	cout << '\n' << "TEST:" << '\n';
	cout << "Expected test length: " << x << '\n' << "String should be: ";

	if (length() == x) {
		cout << '\n' << "(OK)";
	}
	else {
		cout << '\n' << "(Mistake)";
	};
};
int main()
{
	char str[100] = "1458";
	FooString obj1(str);
	obj1.show();
	obj1.length();
	obj1.TEST();
	return 0;
}