#include <iostream>

using namespace std;

class test
{
	public:
	int a;
	int b;
	test()
	{
		a = 0;
		b = 0;
	}
	test(int a_, int b_)
	{
		a = a_;
		b = b_;
	}
	int print()
	{
		cout << a << b << endl;
		return a;
	}
};

int main()
{
	test zero;
	int c = zero.print();
	test a(3,9);
	int b = a.print();
	cout << "hello, micro" << endl;
<<<<<<< HEAD
	cout << b << endl;
=======
	cout << "edited in branch n2 and n1 has been deleted." << endl;
>>>>>>> n2
	return 0;
}