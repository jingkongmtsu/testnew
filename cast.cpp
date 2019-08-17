//Any pointer can be recasted into anything else.
#include <iostream>
#include <memory>
using namespace std;

class A {
	private:
		char c;
	public:
		A(const char& i) { c = i; }
		void print() const { cout << c << endl; }
};

int main()
{
	A* p = new A('D');
	double* pi = (double*)p;
	cout << "pi = " << *pi << endl;
	int* ip = 555;
	const A& rip = *((A*) ip);
	cout << "&rip = " << &rip << endl;
	rip.print();
}
