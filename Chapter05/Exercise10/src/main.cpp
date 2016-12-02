#include<iostream>
#include<vector>

using namespace std;

int main()
{
	cout << "How many integers will be put?\n";
	int range;
	cin >> range;
	vector<double> values (range);
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

	double sum;
	for (int i = 0; i < added; i++){
		sum += values[i];
	}
	if (added < 0){
		cout << "You're sum cannot be calculated.\n";
	}
	else{
		cout << "The sum of the first " << added << " is " << sum << endl;
	}

	// differences between the numbers
	if (values.size() > 1){
		vector<double> differences;
		for (int i = 0; i < (values.size() - 1); i++){
			differences.push_back((values[i+1] - values[i])); // calculates difference between the second number and the number before it
		}
		cout << "The differences between your numbers are: ";
		for (int i = 0; i < differences.size(); i++){
			cout << differences[i] << " ";
		}
	}
}







