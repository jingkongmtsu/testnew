#include <iostream>
#include <memory>
using namespace std;

class A;
typedef void (A::*fp)() const;


class A {
	private:
		int c;
	public:
		//void (A::*fptr)() const;
		fp fptr;
		A(const int i) { c = i; fptr=&A::print; }
		void print() const { cout << c << endl; }
};

int main()
{
	A a(100);
	//(a.*fptr)();  //BAD

	//Tim suggested the following lines. They work, but cubusome. 
	void (A::*fp)() const = a.fptr;
	//fp x = a.fptr;
  (*x)();
}
