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

	while ((userScore != 0) && (userName != "NoName")){
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
	if ((userScore == 0) || (userName == "NoName")){
		cout << "Invalid input entered. Pairs: \n";
	}
	for (int i = 0; i < names.size(); i++){
		cout << names[i] << " " << scores[i] << endl;
	}

	while (userName != "NoName"){
		cout << "Enter a name for its score.\n";
		cin >> userName;
		int * nameFinder;
		nameFinder = find(names.begin(), names.end(), userName);
		if (nameFinder != names.end()){
			cout << scores[*nameFinder];
		}
		else
			cout << "Name not found.\n";
	}
	cout << "Invalid name entered. Goodbye.";



}

