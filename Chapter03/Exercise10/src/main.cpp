#include<iostream>
#include<string>

using namespace std;

int main()
{
	string operation;
	double val1, val2;
	cout << "Enter any number followed by an operation followed by another number.\n";
	cin >> val1 >> operation >> val2;

	if (operation == "+" || operation == "plus"){
		cout << val1 + val2;
	}
	else if (operation == "-" || operation == "minus"){
		cout << val1 - val2;
	}
	else if (operation == "*" || operation == "times"){
		cout << val1 * val2;
	}
	else if (operation == "/" || operation == "over"){
		cout << val1 / val2;
	}
	else{
		cout << "Not an operator I know of.\n";
	}
}


