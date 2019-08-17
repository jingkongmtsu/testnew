#if 0
class B {
	private:
		const int& ir;
		//const int* ir;
	public:
		B(const int& i) : ir(i) {}
		//B(const int& i) : ir(&i) {}
		B& operator=(B& b) { ir = b.ir; return *this; }
};
#endif

int main() 
{ 
	int i = 100;
	int& ir = i;
	int j = 200;
	int& jr = j;
	ir = jr;
}
