#include<iostream>

using namespace std;

double ctok(double c)
{
	if (c < -273.15){
		cout << "Error, impossibly cold.\n";
	}
	else {
		int k = c + 273.15;
		cout << k;
	}
}
int main()
{
	double c = 0;
	cin >> c;
	double k = ctok(c);
}
