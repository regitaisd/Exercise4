#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct player{
	string name;
	int number;
	int score;
};

void show(player data);

int main(){
	
	player data;
	
	int highestScore;
	int totalScore = 0;
	
	player array[12];
						
	for(int i = 1; i <= 12; i++){
		cout << "enter the name for player " << i << ": ";
		cin >> array[i].name;
		cout << "enter the number for player " << i << ": ";
		cin >> array[i].number;
		cout << "enter the total score for player " << i << ": ";
		cin >> array[i].score;
		cout << endl;
		if(array[i].number < 0 || array[i].score < 0){
			cout << "program error: please enter positive numbers only";
		}
		
		totalScore = totalScore + array[i].score;
	}
	
	
	cout << "Name" << "\t\t" << "Number" << "\t\t" << "Score" << endl;
	cout << "------------------------------------------------" << endl;
	for(int i = 1; i <= 12; i++){
			cout << array[i].name << "\t\t" << array[i].number << "\t\t" << array[i].score << endl;
	}
	
	int maxScore = array[1].score;
	int highest = 0;
	for(int i = 1; i <= 12; i++){
		if(array[i].score > maxScore){
			maxScore = array[i].score;
			highest = i;
		}
	}
	cout << "The team's total score: " << totalScore << endl;
	cout << "highest score: " << array[highest].score;
	cout << " scored by player " << array[highest].name;
	cout << " with number " << array[highest].number;
	
	
	return 0;
}
