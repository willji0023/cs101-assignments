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

	//exercise 21
	vector<int>::iterator a;
	userScore = 1; // resets userScore
	while (userScore != 0){
		cout << "Enter the score for its name(s).\n";
		cin >> userScore;
		a = find(scores.begin(), scores.end(), userScore); // searches for first occurance of entered score in scores
		if (a != scores.end()){ // if found
			while (a != scores.end()){
				int position = distance(scores.begin(), a); // calculates position of the found occurance
				cout << names[position] << " has a score of " << userScore << endl;
				a = find(a+1, scores.end(), userScore); // searches scores in the range starting one after the previously found occurance
			}
		}
		else {
			cout << "Score not found.\n";
		}
	}
	cout << "Invalid score entered. Goodbye.";

}



