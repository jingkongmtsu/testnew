#include <iostream>
#include <memory>
using namespace std;

class A {
	private:
		int c;
	public:
		void (A::*fptr)() const;
		A(const int i) { c = i; fptr=&A::print; (*this.*fptr)(); }
		void print() const { cout << c << endl; }
};

int main()
{
	A a(100);
	a.print();
	(a.A::*fptr)();
}
