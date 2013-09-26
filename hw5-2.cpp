#include <iostream>
using namespace std;

int getFactorial(int value);

int main( int argc, char * argv[])
{
	int factor, n;
	factor = getFactorial(n);
	cout << "Enter a positive value:" << endl; // I am sure that in this case the integer or number we input has to be positive.
	cin >> n;
	cout << "The factorial of" << n << "is:" << factor << endl;
}

int getFactorial(int value)
{
	int count = 0;
	int factor = 1;
	for (int count = 1; count <= value; count++)
	{
		factor = factor * count;
	}
	return factor;
}