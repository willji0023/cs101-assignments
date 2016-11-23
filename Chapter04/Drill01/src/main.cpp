#include<iostream>

using namespace std;

int main()
{
	int val1, val2;
	char n;
	while (n != '|'){
		cout << "Enter two numbers.\n";
		cin >> val1 >> val2;
		cout << "The numbers are " << val1 << " and " << val2 << endl;
		cout << "To quit enter '|'.\n";
		cin >> n;
	}
}


