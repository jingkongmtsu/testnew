#include <iostream>
#include <memory>

using namespace std;

class A
{
	private:
		int i;
	public:
		A(int j) : i(j) { cout << "In A() " << endl; }
		void print() const { cout << "A::i = " << i << endl; }
		void printmore() { cout << "A::i = " << i << endl; }
		~A() { i = -1; cout << "In ~A() " << endl; }
};

class B
{
	public:
		shared_ptr<A const> pa;
		B(shared_ptr<A const> a) : pa(a) {}
		void printa() const { pa->print(); }
		//void printb() { pa->printmore(); }
};

class C
{
	public:
		const A* pa;
		C(const A& a) : pa(&a) {}
		void printa() const { pa->print(); }
		//void printb() { pa->printmore(); }
};

int main()
{
	//shared_ptr<A> pa = make_shared<A>(100);
	B b(make_shared<A>(100)); //B b(make_shared<A>(100)); //A lives after this line.
	b.printa();
	C c(A(100));  //A dies after this line.
	c.printa();
	cout << "after scope" << endl;
}

