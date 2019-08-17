#include<vector>
#include<memory>
using namespace std;

int main()
{
	int* ptr = new int [2];
	int y = ptr[2];
	vector<int> arr(5);
	for (int i = 0; i < 6; i++) arr[i] = 1;
}
