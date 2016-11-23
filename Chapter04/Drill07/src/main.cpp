#include<iostream>
#include<string>

using namespace std;

int main()
{
	double value, largest, totalLength;
	double smallest = 100000;
	string units;
	char n;

	while (n != '|'){
		cout << "Enter a number and its units.\n";
		cin >> value >> units;
		if (units == "m" || units == "meters"){
			totalLength = value;
		}
		if (units == "cm" || units == "centimeters"){
			totalLength = value/100;
		}
		if (units == "in" || units == "inches"){
			totalLength = value*2.54/100;
		}
		if (units == "ft" || units == "feet"){
			totalLength = value*12*2.54/100;
		}
		if (totalLength > largest){
			cout << value << units << " the largest so far\n";
			largest = totalLength;
		}
		if (totalLength < smallest){
			cout << value << units << " the smallest so far\n";
			smallest = totalLength;
		}
		cout << "To quit enter '|'.\n";
		cin >> n;
	}
}



