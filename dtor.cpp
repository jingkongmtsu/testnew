//virtual destructor has to be constructed at every level. 
//It can be empty if no memory is explicitly allocated.
#include <iostream>
#include <memory>
using namespace std;


class B {
	private:
	public:
		B(){ cout << "In B" << endl; }
		~B() { cout << "In ~B" << endl; }
};

class A {
	public:
		A() { cout << "In A" << endl; }
		virtual ~A() = 0;
		// { cout << "In ~A" << endl; }
};

class AA : public A {
	private:
		B b;
	public:
		AA() : A(), b()  { cout << "In AA" << endl; }
		virtual ~AA() { cout << "In ~AA" << endl; }
};



int main()
{
	A* p = new AA;
	delete p;
}
