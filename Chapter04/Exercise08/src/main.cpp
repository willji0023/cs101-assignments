#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int grains, userGrains, tiles, total = 0;
	cout << "How many grains would you like?\n";
	cin >> userGrains;

	for (int i = 1; userGrains > total; i++){
		grains = 0.5 * pow(2, i); // calculates how many grains on "i"st tile
		total = total + grains; // adds that to amount of grains total
		tiles++; // records what tile you're on
	}
	cout << "You would need at least " << tiles << " tiles.";
}

