#include <iostream>     // std::cout
using namespace std;

class Base {
	private:
		int* b;
	public:
		Base(int i1, int i2) { b = new int [2]; b[0] = i1; b[1] = i2; }
		Base(const Base& bx) { b = new int [2]; b[0] = bx.b[0]; b[1] = bx.b[1]; }
		auto print() const { printf("i1 = %d, i2 = %d\n", b[0], b[1]); }
		~Base() { delete [] b; }
};

class Drv: public Base {
	public:
		Drv(int i1, int i2) : Base(i1,i2) {}
		~Drv() {}
};

int main()
{
	Drv a(1,2);
	a.print();
 	Drv b(a);
	b.print();
	Drv c(3,4);
	c = a;
	c.print();
}

