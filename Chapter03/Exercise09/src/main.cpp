#include<iostream>

using namespace std;

int main()
{
	char goodbye = 0;
	while (goodbye != 'a'){
		cout << "Enter number: ";
		int value;
		cin >> value;
		if (value == 0){
			cout << "zero\n";
		}
		else if (value == 1){
			cout << "one\n";
		}
		else if (value == 2){
			cout << "two\n";
		}
		else if (value == 3){
			cout << "three\n";
		}
		else if (value == 4){
			cout << "four\n";
		}
		else {
			cout << "Not a number I know.\n";
		}
		cout << "Enter a to leave. Otherwise, enter any letter to keep going.\n";
		cin >> goodbye;
	}
}
