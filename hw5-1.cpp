/**
*
**/
#include <iostream>
using namespace std;

double getLength();
double getSum(int arraySize);

int main(int argc, char * argv[])
{
cout << "Enter the numbers you want the sum of:" << endl;
cout << "Length:" << endl;

int length = getLength();

cout << "Enter the numbers you want the sum of:" << length << endl;
double sum = getSum(length)
cout << "The total" << sum << endl;
cout << "Average Baby" << sum/length << endl;
}

double getLength()
{
	double length;
	cin >> length;
	return length;
}
double getSum(int length)
{
	double sum = 0;
	double number = 0; 
	for (int i = 0; i < length; ++i)
	{
		cin >> number;
		sum += num;
	}
	return sum;
}