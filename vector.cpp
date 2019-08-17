#include<iostream>
#include<vector>
using namespace std;

//Compiler will not provide a default ctor if any ctor is defined.
//There is a difference between vector<A> v and vector<A> v(). Not
//sure what it is.
//push_back, resize and shrink_to_fit will initialize then copy everything.  expensive.

class A
{
	private:
		int i;
	public:
		A() : i(1111) { cout << "in def ctor" << endl;};
		A(int j) : i(j) {};
		A(const A& a) : i(a.i) { cout << "in copy ctor" << endl; }
		A& operator=(const A& a) { i = a.i; cout << "in = " << endl; return *this; }
		void print() const { cout << "A.i = " << i << endl; }
		~A() { cout << "in dtor" << endl; }
};

int main()
{
	vector<A> v(2);
	v.reserve(3);
	A a(100);
	v[0] = a;
	cout << "size = " << v.size() << ", capacity = " << v.capacity() << endl;
	v.push_back(A(200));
	cout << "size = " << v.size() << ", capacity = " << v.capacity() << endl;
}
