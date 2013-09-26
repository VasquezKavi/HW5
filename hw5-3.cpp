#include <iostream>
#include <vector>
using namespace std; 

void swap(int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
	// If I am correct then this should swap the numbers from "a" to "b" by making "c" a temp spot.
}

int main(int argc, char * argv[])
{
	int a;
	int b;
	cout << "Enter two numbers that you want to swap" << endl;
	cin >> a >> b;
	swap(a, b);
	cout << a << " " << b << endl;
}