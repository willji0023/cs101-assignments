#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	cout << "How much tiles are there?\n";
	int tiles;
	cin >> tiles;

	int grains = pow(2, tiles) * 0.5;
	cout << "There are " << grains << " grains of rice in " << tiles << " tiles.";

}


