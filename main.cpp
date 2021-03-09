//C1 P3 Game Scores

#include <iostream>
#include <string>
using namespace std;

// Variable Declarations
string playerName;
int avgScore;
int score1;
int score2;
int score3;

int main()
{
	cout << "- - - - - Game Statistics - - - - -\n";
   
	cout << "\nEnter the player's name: ";
	cin >> playerName;
	cout << "\nPlease enter the required game scores: ";
	
	cout << "\n\n Game Score 1: ";
	cin >> score1;
	cout << "\n Game Score 2: ";
	cin >> score2;
	cout << "\n Game Score 3: ";
	cin >> score3;
	
	//Processing
	
	avgScore = (score1 + score2 + score3) / 3;
	
	
	cout << "\n\nGame Score Average for " << playerName << " is: " << avgScore ;

    cout << "\n\nEnd of Program";
    return 0;
}