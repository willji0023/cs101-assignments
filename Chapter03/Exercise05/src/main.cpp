#include<iostream>

using namespace std;

int main()
{
	double val1, val2;
	cout << "Enter two integers.\n";
	cin >> val1 >> val2;
	if (val1 > val2){
		cout << val1 << " is larger.\n";
		cout << val2 << " is smaller.\n";
		cout << "The difference is " << val1 - val2 << endl;
		cout << "The ratio is " << val1 / val2 << endl;
	}
	else if (val1 < val2){
		cout << val2 << " is larger.\n";
		cout << val1 << " is smaller.\n";
		cout << "The differnce is " << val2 - val1 << endl;
		cout << "The ratio is " << val1 / val2 << endl;
	}
	cout << "The sum is " << val1 + val2 << endl;
	cout << "The product is " << val1 * val2 << endl;
}
