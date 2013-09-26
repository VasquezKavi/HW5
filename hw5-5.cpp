#include <iostream>
#include <string>
#include <map>
using namespace std;


double hexToDec(string &hex)
{
	double sum;
	int counter = 1;
	int length = hex.length() -1;
	map<char, int> digit;
	digit['0'] = 0;
	digit['1'] = 1;
	digit['2'] = 2;
	digit['3'] = 3;
	digit['4'] = 4;
	digit['5'] = 5;
	digit['6'] = 6;
	digit['7'] = 7;
	digit['8'] = 8;
	digit['9'] = 9;
	digit['A'] = 10;
	digit['B'] = 11;
	digit['C'] = 12;
	digit['D'] = 13;
	digit['E'] = 14;
	digit['F'] = 15;
	for (length; length >=0; --length)
	{
		int digitValue = digit[hex[length]];
		sum = counter * digitValue + sum;
		counter = counter * 16;

		//sum = cout << hex << "equals" << "in decimal"<< endl;
	}
	return sum;

}

int main(int argc, char * argv[])
{
	string hex;
	cout << "Please enter the hexadecimal number: " << endl;
	cin >> hex;
	cout << hexToDec(hex);
}