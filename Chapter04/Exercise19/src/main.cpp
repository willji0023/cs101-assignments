//Exercise 19
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> scores;
	vector<string> names;
	int userScore = 1;
	string userName;

	while ((userScore != 0) && (userName != "NoName")){ // ends when user enters NoName for a name or 0 as a score
		cout << "Enter a name and after, a score.\n";
		cin >> userName >> userScore;
		if (find(names.begin(), names.end(), userName) != names.end()){
			cout << "Same name entered twice. Pairs:\n";
			break;
		}
		else
			names.push_back(userName);
			scores.push_back(userScore);
	}
	if ((userScore == 0) || (userName == "NoName")){ // if loop was exited by incorrect input
		cout << "Invalid input entered. Pairs: \n";
	}
	for (int i = 0; i < names.size(); i++){
		cout << names[i] << " " << scores[i] << endl;
	}

}



