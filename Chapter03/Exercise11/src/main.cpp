#include<iostream>

using namespace std;

int main()
{
	int pennies, nickels, dimes, quarters, halfs, ones, total;
	cout << "How many pennies ya got?\n";
	cin >> pennies;
	cout << "How bout them nickels?\n";
	cin >> nickels;
	cout << "Heard of dimes yo?\n";
	cin >> dimes;
	cout << "What about them quarter dawg?\n";
	cin >> quarters;
	cout << "Brother I ain't lying, where them half dollars at?\n";
	cin >> halfs;
	cout << "Yall ever heard of dem one-dollar coins?\n";
	cin >> ones;
	total = (pennies * 1) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfs * 50) + (ones * 100);

	// if anything is 1, it has to be grammatically correct
	if (pennies == 1){
		cout << "You have " << pennies << " penny.\n";
	}
	else{
		cout << "You have " << pennies << " pennies.\n";
	}

	if (nickels == 1){
		cout << "You have " << nickels << " nickel.\n";
	}
	else{
		cout << "You have " << nickels << " nickels.\n";
	}

	if (dimes == 1){
		cout << "You have " << dimes << " dime.\n";
	}
	else{
		cout << "You have " << dimes << " dimes.\n";
	}

	if (quarters == 1){
		cout << "You have " << quarters << " quarter.\n";
	}
	else{
		cout << "You have " << quarters << " quarters.\n";
	}

	if (halfs == 1){
		cout << "You have " << halfs << " half dollar.\n";
	}
	else{
		cout << "You have " << halfs << " half dollars.\n";
	}

	if (ones == 1){
		cout << "You have " << ones << " one-dollar coin.\n";
	}
	else{
		cout << "You have " << ones << " one-dollar coins.\n";
	}

	cout << "The value of all your coins is " << total;
}



