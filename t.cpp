#include<iostream>
#include<vector>

using namespace std;

class A { 

	private:
		int* p; 

	public:
		A(int& i) : p(&i) {}
		const int* get() const { return p; }
		int*& get() { return p; }
};

int main()
{
	int i = 10;
	A a(i);
	int j = 5;
	a.get() = &j;
}
