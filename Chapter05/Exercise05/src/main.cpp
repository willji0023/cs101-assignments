#include<iostream>

using namespace std;

double ctok(double c)
{
	int k = c + 273.15;
	return k;
}

double ktoc(double c)
{
	int k = c - 273.15;
	return k;
}

int main()
{
	cout << "'a' for K to C, 'b' for C to K\n";
	char conversion = 0;
	cin >> conversion;
	double c = 0;
	cout << "Enter temperature\n";
	cin >> c;

	if (conversion == 'a'){
		if (c < -273.15){
			cout << "Error, impossibly cold\n";
		}
		else{
			double k = ctok(c);
			cout << k << "\n";
		}
	}
	else if (conversion == 'b'){
		if (c < 0){
			cout << "Error, impossibly cold\n";
		}
		else{
			double k = ktoc(c);
			cout << k << "\n";
		}
	}
}


