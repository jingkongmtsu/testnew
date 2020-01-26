//**delete a pointer via in a reference.
//**a reference cannot be reasigned.
#include <iostream>
#include<memory>
using namespace std;

class A {
	public:
		A() { cout << "A() " << endl; }
		A(const A& a) { cout << "A(const& A)" << endl; }
		A& operator = ( const A& a) { cout << "A=" << endl; }
		~A() { cout << "~A()" << endl; }
};

int main()
{
	A& ar = *(new A);
	delete &ar;
	A a1;
	ar = a1;  //op= is called. Potential memory error because ar is already deleted.
	cout << "exit" << endl;
}
