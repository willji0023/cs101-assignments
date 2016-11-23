#include<iostream>
#include<string>

using namespace std;

int main()
{
	double value, largest, totalLength;
	double smallest = 100000;
	string units, largestUnit, smallestUnit;
	char n;

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
		}
		if (totalLength < smallest){
			cout << value << units << " the smallest so far\n";
			smallest = totalLength; // remembers smallest value
		}
		cout << "To quit enter '|'.\n";
		cin >> n;
	}
}



