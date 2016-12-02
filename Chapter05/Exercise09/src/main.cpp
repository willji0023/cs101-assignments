#include<iostream>
#include<vector>

using namespace std;

int main()
{
	cout << "How many integers will be put?\n";
	int range;
	cin >> range;
	vector<int> values (range);
	cout << "Which of these first numbers should be added?\n";
	int added;
	cin >> added;

	int entered = 0;
	int userNumber;
	while (entered < range){
		cout << "Enter a number. " << entered << " numbers have been entered.\n";
		cin >> userNumber;
		values[entered] = userNumber;
		entered++;
	}
	cout << "All " << range << " numbers have been added\n";

	int sum;
	for (int i = 0; i < added; i++){
		sum += values[i];
	}
	if (added < 0){
		cout << "You're sum cannot be calculated.\n";
	}
	else{
		cout << "The sum of the first " << added << " is " << sum;
	}
}



