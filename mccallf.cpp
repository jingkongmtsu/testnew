//usage: g++ -lgfortran modd.o mccallf.cpp

#include<iostream>
using namespace std;
struct point {
double x,y,z;
};

extern "C" void modd_(point*);

int main()
{
	point base;
	modd_(&base);
	cout << base.x << endl;
}
