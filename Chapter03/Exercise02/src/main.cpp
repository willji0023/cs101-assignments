#include<iostream>

using namespace std;

int main()
{
	cout << "Type 'a' for miles to kilometers. Type 'b' for kilometers to miles.\n";
	char conversion;
	cin >> conversion;
	double val;
	if (conversion == 'a'){
		cout << "Enter miles: ";
		cin >> val;
		cout << "That would be " << val*1.609 << " kilometers.\n";
	}
	else if (conversion == 'b'){
		cout << "Enter kilometers: ";
		cin >> val;
		cout << "That would be " << val/1.609 << " miles.\n";
	}
	cout << "And im too lazy to put this into a loop. Goodbye!";
}

