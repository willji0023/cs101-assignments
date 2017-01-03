#include<iostream>
#include<vector>

using namespace std;

int main()
{
	// Gets the number of numbers to be entered and added
	cout << "How many integers will be put?\n";
	int range;
	cin >> range;
	vector<int> values;
	values.reserve(range);
	cout << "Which of these first numbers should be added?\n";
	int added;
	cin >> added;
	if (range < added){ // only if numbers to be added is more than actual amount of numbers
		cout << "You are adding more than the numbers you requested.\n";
		while (range < added){
			cout << "Please reenter a valid number of numbers to be added.\n";
			cin >> added;
		}
	}
	// receives user's numbers until the amount exceeds the actual amount of numbers
	int entered = 0;
	int userNumber;
	while (entered < range){
		cout << "Enter a number. " << entered << " numbers have been entered.\n";
		cin >> userNumber;
		values.push_back(userNumber);
		entered++;
	}
	cout << "All " << range << " numbers have been added\n";

	// calculates the sum of the first # numbers the user input
	int sum;
	for (int i = 0; i < added; i++){
		sum += values[i];
	}

	// displays all the numbers in the vector and the calculated sum
	cout << "Your numbers: ";
	for (int i = 0; i < values.size(); i++){
		cout << values[i] << " ";
	}
	cout << "\nThe sum of the first " << added << " is " << sum;
}
