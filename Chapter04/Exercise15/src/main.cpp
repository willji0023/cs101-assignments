#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int amount;
	cout << "How many primes?\n";
	cin >> amount;

	// copied and pasted from my Exercise11, yay for recycling
	vector<int> notprime;
		for (int i = 2; i < amount*4; i++){ // just to make sure the amount of primes is enough
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

	for (int i = 0; i < amount; i++){ // displays prime's numbers from position 0 to the user's amount
		cout << prime[i] << " ";
	}
}



