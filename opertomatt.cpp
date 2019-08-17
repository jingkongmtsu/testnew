//Any pointer can be recasted into anything else.
#include <iostream>
using namespace std;

//Assignment op with a const& member.

class A {
	private:
		int i;

	public:
		A(const int& j): i(j) {}
		auto print() const { cout << "A.i = " << i << endl; }
};

class B {
	private:
		//const A& ir;
		const A* ir;

	public:
		//B(const A& i) : ir(i) {}
		B(const A& i) : ir(&i) {}
		B& operator=(B& b) { ir = b.ir; return *this; }

		//void print() const { ir.print(); }
		auto print() const { ir->print(); }
};

int main()
{
	int ii = 100;
	A i(ii);
	B ir(i);
	ir.print();
	int jj = 2;
	A j(jj);
	B jr(j);
	jr.print();

	jr = ir;

	jr.print();
}
