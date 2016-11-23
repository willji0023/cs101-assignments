#include<iostream>
#include<vector>

using namespace std;

int main()
{
	cout << "What is the maximum range of primes you want? ";
	int max;
	cin >> max;

	vector<int> prime1;
	for (int i = 2; i < max; i++){ //gets all possible numbers in prime1
		prime1.push_back(i);
	}
	vector<int> prime2;
	for (int i = 0; i < prime1.size(); i++){ // gets all numbers not divisble by 2 into prime2
		if (prime1[i] % 2 != 0){
			prime2.push_back(prime1[i]);
		}
	}
	prime1.clear(); // empty prime1
	for (int i = 0; i < prime2.size(); i++){ // gets all numbers from prime2 divisible by 3 into prime1
		if (prime2[i] % 3 != 0){
			prime1.push_back(prime2[i]);
		}
	}
	prime2.clear(); // empty prime2
	for (int i = 0; i < prime1.size(); i++){ // gets all numbers from prime1 divisible by 5 into prime2
		if (prime1[i] % 5 != 0){
			prime2.push_back(prime1[i]);
		}
	}
	prime1.clear(); // empty prime1
	for (int i = 0; i < prime2.size(); i++){ // gets all numbers from prime2 divisble by 7 into prime1
		if (prime2[i] % 7 != 0) {
			prime1.push_back(prime2[i]);
		}
	}
// all prime numbers are now in prime1
	cout << "2 3 5 7 "; // except all numbers used to divide
	for (int i = 0; i < prime1.size(); i++){ // displays all values in prime1
		cout << prime1[i] << " ";
	}

}



