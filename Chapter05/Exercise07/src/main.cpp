#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double a, b, c = 0;
	cout << "Enter your a value followed by b value followed by c.\n";
	cin >> a >> b >> c;
	double x1 = ((-b + (sqrt(pow(b, 2) - (4*a*c)))) / (2*a));
	double x2 = ((-b - (sqrt(pow(b, 2) - (4*a*c)))) / (2*a));
	if (isnan(x1) || isnan(x2)){
		cout << "There are no solutions.\n";
	}
	else{
		cout << x1 << " and " << x2;
	}
}

