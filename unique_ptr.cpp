#include <iostream>
#include <memory>
using namespace std;

class B;
class A {
  friend class B;
	private:
		int j;
	public:
		A(int i) { cout<< "in ctr" << endl; j =i; }
		int p() const { return j; }
		int q() { j = 200; return j; }
		~A() { cout << "destructed j = " << j << endl; }
};

class B {
	const A& a;
public:
	B(const A& a0) : a(a0) { cout << "In B::B " << endl; }
	void print() { cout << "In B " << a.p() << endl; }
};

int main()
{
	unique_ptr<A> pa = make_unique<A>(100);
	pa = make_unique<A>(10);
	cout << pa->p() << endl;
	B b(*pa.get());
	b.print();
}
