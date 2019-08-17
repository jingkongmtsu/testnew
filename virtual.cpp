#include <iostream>
#include <memory>
using namespace std;

class Base 
{
	public: 
		Base() {}
		virtual Base& get() = 0;
		virtual void print() const { cout << "In base" << endl; }
  	virtual ~Base() {cout << "destruct base" << endl; }
};

class A: public Base {
	private:
		int j;
	public:
		A(int i) { cout<< "A ctr" << endl; j =i; }
		Base& get() { return *this; }
		void print() const { cout << "In A" <<  j << endl; }
		~A() { cout << "A destruct" << endl; }
};


int main()
{
	Base* b = new A(100);
	b->print();
	((A*)b)->print();
	delete b;
}
