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
		if (val1 > val2){
			cout << "The larger value is " << val1 << endl;
			cout << "The smaller value is " << val2 << endl;
		}
		else if (val1 < val2){
			cout << "The larger value is " << val2 << endl;
			cout << "The smaller value is " << val1 << endl;
		}
		else if (val1 == val2){
			cout << "The numbers are equal.\n";
		}
		cout << "To quit enter '|'.\n";
		cin >> n;
	}
}








