#include<iostream>
#include<string>

using namespace std;

int main()
{
	string first_name;
	cout << "ENTER NAME: ";
	cin >> first_name;
	char sex = 0;
	cout << "ENTER SEX (m/f): ";
	cin >> sex;
	if (sex == 'm'){
		cout << "To Prince " << first_name << ",\n";
	}
	else if (sex == 'f'){
		cout << "To Princess " << first_name << ",\n";
	}
	cout << "\tWe have hereby lost the skirmish at Saratoga and are in full retreat. Our plan to split New England from the other colonies have been thwarted by American General Benedict Arnold.\n";
	string friend_name;
	cout << "ENTER FRIEND'S NAME: ";
	cin >> friend_name;
	cout << "My own Commander " << friend_name << " has been shot in the arm during our retreat.\n";
	char friend_sex = 0;
	cout << "ENTER FRIEND'S GENDER (m/f): ";
	cin >> friend_sex;
	if (friend_sex == 'm'){
		cout << "He has a high fever and I'm afraid he may not make it past this week.\n";
	}
	else if (friend_sex == 'f'){
		cout << "She has a high fever and I'm afraid she may not make it past this week.\n";
	}
	int age = 1;
	while (age > 0 || age < 100){
		cout << "ENTER YOUR AGE: ";
		cin >> age;
		if (age > 0 && age < 100){
			cout << "I've heard yourself has turned " << age << ". ";
			break;
		}
		else{
			cout << "INVALID AGE ENTERED.\n";
		}
	}
	if (age < 12){
		cout << "Let us raise a glass to your youth.\n";
	}
	else if (age < 70){
		cout << "Your youth has never wavered.\n";
	}
	else if (age > 70){
		cout << "Long live the royal family.\n";
	}
	cout << "\t\t\tYours Sincerely,\n";
	cout << "\t\t\tGeneral Burgoyne\n";
}


