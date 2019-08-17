//test default arguments
//conclusion: if only the 2nd argument is given, the first default 
//will be used as long as they are different types, i.e. A(0.1) works.
#include <iostream>
#include <memory>
using namespace std;

class A {
	public:
		int i;
		double d;
		A(int j = 100, double x = 0.001) : i(j), d(x) { }
		void print() const { cout << "i = " << i << "   d = " << d; }
};

int main()
{
	A a; a.print();
	A b(2); b.print();
	A c(0.8); c.print();

}
