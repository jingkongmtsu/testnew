#include <iostream>
#include <memory>
using namespace std;

void (*fptr)(int);

void foo(int i) { cout << "in foo" << endl; }

int main()
{
	fptr = &foo;
	(*fptr)(100);
}
