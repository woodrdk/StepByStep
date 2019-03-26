// CodeStepByStep 
// C++ 
// Programming Basics 
// stanfordVsCal 


#include <iostream>
int main() {
	int score1 = 0;
	int score2 = 0;
	string stanford = "Stanford";
	string cal = "Cal";
	cout << stanford << ": How many points did they score? ";
	cin >> score1;
	cout << cal << ": How many points did they score? ";
	cin >> score2;

	if (score1 > score2)
		cout << stanford << " won!" << endl;
	else
		cout << cal << " won!" << endl;
	return 0;
}