#include <iostream>
#include <memory>
#include <iostream>     // std::cout
#include "/nfshome/jing/xTron_source/xTron.f90/src/general/include/xvector.h"
using namespace std;

int main()
{
	vector<vector<double> > a(100, vector<double>(1));
	a[99][2] = 1.0;

	XVector<double> x(5, double(3));
	x *= 100;
	XVector<double> y(x.size(), double(2));
	XVector<double> z(x.size(), double(0));
	z = x-y;
	cout << "(x+y)[3] " << (x+y)[3] << endl;
	cout << "(x-y)[3] " << (x-y)[3] << endl;
	cout << "z[3] " << z[3] << endl;
	y += x;
	cout << "y[3] " << y[3] << endl;
}
