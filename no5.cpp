#include <iostream>
#include <string>
using namespace std;

struct weather{
	int rainfall;
	float highTemp;
	float lowTemp;
	float avgTemp;
};

enum month{JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

int main(){
	weather arr[12];
	int totalRain = 0;
	float highestTemp;
	float lowestTemp;
	float totalAvgTemp;
	string month[12] = {"January", "February", "March", "April",
	                    "May", "June","July","August",
						"September", "October", "November", "December"};
	
	for(int i = JANUARY; i <= DECEMBER; i++){
		cout << "Month: " << month[i] << endl;
		cout << "Rainfall: ";
		cin >> arr[i].rainfall;
		cout << "Highest Temperature: ";
		cin >> arr[i].highTemp;
		if(arr[i].highTemp > 140 || arr[i].highTemp < -100){
			cout << "Program error: invalid temperature input" << endl;
			cout << "Please re-enter your temperature value: " << endl;
			cin >> arr[i].highTemp;
		}
		cout << "Lowest Temperature: ";
		cin >> arr[i].lowTemp;
		if(arr[i].lowTemp > 140 || arr[i].lowTemp < -100){
			cout << "Program error: invalid temperature input" << endl;
			cout << "Please re-enter your temperature value: " << endl;
			cin >> arr[i].lowTemp;
		}
		arr[i].avgTemp = (arr[i].highTemp + arr[i].lowTemp) / 2;
		cout << "Average Temperature: ";
		cout << arr[i].avgTemp << endl;
		cout << endl;
		
		totalRain = totalRain + arr[i].rainfall;
	}
	
	highestTemp = -101;
	for(int i = JANUARY; i <= DECEMBER; i++){
		if(arr[i].highTemp > highestTemp){
			highestTemp = arr[i].highTemp;
		}
	}
	
	lowestTemp = 141;
	for(int i = JANUARY; i <= DECEMBER; i++){
		if(arr[i].lowTemp < lowestTemp){
			lowestTemp = arr[i].lowTemp;
		}
	}
	
	cout << "Total Rainfall of the year: " << totalRain;
	cout << "Highest Temperature of the year: " << highestTemp;
	cout << "Lowest Temperature of the year: " << lowestTemp;
	
	return 0;
}
