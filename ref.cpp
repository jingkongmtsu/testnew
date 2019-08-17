#include <iostream>
#include <memory>
using namespace std;

class B {
	private:
		int i;
	public:
		B(int i0) : i(i0) {}
		void mod(int m) { i *= m; }
		void print() const { cout << i << endl; }
};

//ref as a data member.
class A {
	public:
		B& b;
		A(B& b0) : b(b0) { }
		void modB() const { b.mod(100); }
};

void printint(const int& a) { cout << a << endl; }

int main()
{
	printint(3+5);

	//copying ref.
	int i = 100;
	const int* r1 = &i;
	int j = 200;
	r1 = &j;

	//ref as a data member.
//	B b(10);
//	A a(b);
//	a.modB();
//	a.b.print();
}
