//Any const * assigned in a function.
#include <iostream>
#include <memory>
using namespace std;

double y = 0.01;
void foo(const double*& x) { x = &y; }
int main()
{
	const double* pd = 0;
	foo(pd);
	cout << *pd << endl;
}
