#include<iostream>

using namespace std;

double ctok(double c)
{
	int k = c + 273.15;
	return k; // changed int into int k
}
int main()
{
	double c = 0;
	cin >> c; // changed undeclared variable to c
	double k = ctok(c); // changed "c" to the right type
	cout << k << "\n"; // fixed capitalization mistake of Cout
}



