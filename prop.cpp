#include <vector>
#include <iostream>
#include <memory>
using namespace std;

class BatchProp
{
	public:
		BatchProp() {}
		virtual BatchProp& get() = 0;
		virtual void print() {cout << "in base batchprop" << endl; }
		virtual ~BatchProp() {cout << "destruct batchprop" << endl; }
};

class BatchEnergy : public BatchProp {
	public:
		BatchEnergy() { cout << "ctr BatchEnergy" << endl; }
		void print() { cout << "Is xxxx BatchEnergy" << endl; }
		BatchEnergy& get() { return *this; }
		virtual ~BatchEnergy() {cout << "destruct batchenergy" << endl; }
};

class Prop
{
	public: 
		Prop() {}
		virtual BatchProp& get() = 0;
  	virtual ~Prop() {cout << "destruct Prop" << endl; }
};

class Energy: public Prop {
	private:
		BatchEnergy* be;
	public:
		Energy(): be(0) {}
		BatchProp& get() { be = new BatchEnergy; cout<< "making BatchEnergy" << endl; return *be; }
		~Energy() { cout << "destruct energy" << endl; }
};


int main()
{
	Energy energy;
	Prop& prop = energy;
	BatchProp& bprop = prop.get();
	BatchEnergy& pbe = BatchEnergy (bprop);
	pbe.print();
}
