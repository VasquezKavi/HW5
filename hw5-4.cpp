#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	int a;
	int b;
	int c;
	for (a = 1; a < 998; ++a)
	{
		for (b = 1; b < (999 - a); ++b)
		{
			c = 1000 - (a + b);
			if (a + b + c == 1000)
			{
				if((a*a) + (b*b) == (c*c))
				{
					cout << "a: " << a << endl;
					cout << "b: " << b << endl;
					cout << "c: " << c << endl;
					cout << "abc = " << a*b*c << endl;
					return 0;
				}
			}
		}
	}
}