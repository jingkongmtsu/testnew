//test temporary object
//conclusions: ref to &B() does not pass compiler.  But ref to new B passes.  
//So one can use unique_ptr for this purpose.  BUT the temp object becomes
//absolute garbage after the ctr call ends. 
#include <iostream>
#include <memory>
using namespace std;

class B {
	public:
		double x;
		B(int i = 100, double y = 0.1) {}
		B() { x = 0.001; }
		~B() { x = -100.0; cout << "B destructor called, x reset to" << x << endl; }
};

class A {
	public:
		B& b;
		A(B& b0 = *(make_unique<B>())) : b(b0) { cout << "In A ctr: B addr = " << &b << endl; }
		void print() const { cout << "In A::print B addr = " << &b << "and b.x = " << b.x << endl; }
};

int main()
{
	A a; a.print();
}
