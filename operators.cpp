//Any pointer can be recasted into anything else.
#include <iostream>
using namespace std;

class A {
	friend A operator * (int i, const A& a);
	private:
		int c;
	public:
		A(int i) { c = i; }
		A(const A& a) : c(a.c) { cout << "In copy ctr" << endl; }
		void operator = (const A& a) { c = a.c;  cout << "In assign op" << endl; }
		void print() const { cout << c << endl; }
};

A operator * (int i, const A& a)
{
	A rv(a);
	rv.c *= i;
	return rv;
}

//Assignment op with a const& member.
class B {
	private:
		const int* ir;

	public:
		B(const int& i) : ir(&i) {}
		B& operator=(const B& b) { ir = b.ir; return *this; }

		void print() const { cout << "ir = " << *ir << endl; }
};

int main()
{
	int i = 100;
	const int& ixx = i;
	B ir(i);
	ir.print();
	int j = 2;
	const int& jxx = j;
	ixx = jxx;
	B jr(j);
	jr.print();

	jr = ir;

	jr.print();
	

	//Testing assignment operator.


		//Test A;
//	A a(2);
//	A b = 200*a;
//	b.print();
//	A c = b;
//	c = b;
}
