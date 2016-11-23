#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> notprime;
	for (int i = 2; i < 100; i++){ // makes vector have numbers 2 to 100
		notprime.push_back(i);
	}

	vector<int> prime;
	for (int i = 0; i < notprime.size(); i++){ // cycles through each number 1 to 100
		for (int j = 2; j <= notprime[i]; j++){ // divides every i number by all numbers less than itself
			if (j == notprime[i]){ // if j has made it to its last loop
				prime.push_back(notprime[i]); // i number is prime (can't be divided any number smaller than itself)
			}
			if (notprime[i]%j == 0){ // if i number is divisible
				break; // stop dividing that particular i number
			}
		}
	}

	cout << "Primes: ";
	for (int i = 0; i < prime.size(); i++){ // displays all primes numbers in vector prime
		cout << prime[i] << " ";
	}

}


