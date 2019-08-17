#include <iostream>
using namespace std;

int f1(int a, int b = 3) { return a+100; }
int f2(int a, int b) { return -100; }
int (*pf)(int, int);

int main()
{
	pf = &f1;
	cout << (*pf)(3,0) << endl;
	pf = &f2;
	cout << (*pf)(3,1) << endl;
}
