#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	double value, largest, totalLength, sum;
	double smallest = 100000;
	string units, largestUnit, smallestUnit;
	int valuesEntered;
	char n;
	vector<double> allValues;

	while (n != '|'){
		cout << "Enter a number and its units.\n";
		cin >> value >> units;
		if (units == "m" || units == "meters"){
			totalLength = value;
		}
		else if (units == "cm" || units == "centimeters"){
			totalLength = value/100;
		}
		else if (units == "in" || units == "inches"){
			totalLength = value*2.54/100;
		}
		else if (units == "ft" || units == "feet"){
			totalLength = value*12*2.54/100;
		}
		else {
			cout << "Invalid units entered. Try again.\n";
			continue;
		}
		if (totalLength > largest){
			cout << value << units << " the largest so far\n";
			largest = totalLength; // remembers largest value
			largestUnit = units; // remembers the largest value's units
		}
		if (totalLength < smallest){
			cout << value << units << " the smallest so far\n";
			smallest = totalLength; // remembers smallest value
			smallestUnit = units; // remembers smallest value's units
		}
		allValues.push_back(totalLength);
		sum = sum + totalLength; // adds the totalLength (already in meters) to the sum
		valuesEntered++; // invalid units inputs will not be included
		cout << "To quit enter '|'.\n";
		cin >> n;
	}
	cout << "Highest value: " << largest << largestUnit << endl;
	cout << "Lowest value: " << smallest << smallestUnit << endl;
	cout << "Sum of all values entered in meters: " << sum << "m\n";
	cout << "Number of values entered: " << valuesEntered << endl;
	cout << "The values in meters: ";
	sort(allValues.begin(), allValues.end());
	for (int i = 0; i < allValues.size(); i++){
		cout << allValues[i] << "m, ";
	}
}



