//Any pointer can be recasted into anything else.
#include <iostream>
#include <memory>
using namespace std;

extern "C" void modtest_();

int main()
{
	modtest_();
}

