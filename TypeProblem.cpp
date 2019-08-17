#include <iostream>
using namespace std;

class Thing {
	public:
		Thing(){}
		virtual void foo() = 0;
};

class Cat: public Thing 
{
	public:
		Cat() {}
		void foo() {}
};

class House: public Thing 
{
	public:
		House() {}
		void foo() {}
};


//What I want is to treat constructor
//as a function, and then, do something
//like this:

map<string, &Thing()> things;
things.insert("Cat",&Cat());
things.insert("House", &House());

//I have a workaround that will work, but
//I don't want to use it if I can help
//because I need to explicitly create a
//function for each class.

//Thing* makeCat() { return new Cat; }
//Thing* makeHouse() { reutnr new House; }
//things.insert("Cat",&makeCat());
//things.insert("House", &makeHouse());


int main()
{
	//I get a string from input.
	string s("Cat");
	//Instantiate an object according to s.
	auto* aThing = new things[s] ();
	//Using my undesirable scheme:
	//Thing* aThing = things[s]();
}
