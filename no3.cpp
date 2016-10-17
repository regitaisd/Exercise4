//programming challenge no.3
#include <iostream>
#include <string>
using namespace std;

struct divisionSales{
	string division;
	double firstQuarter;
	double secondQuarter;
	double thirdQuarter;
	double fourthQuarter;
	float total;
	float average;
};

void show(divisionSales data);

int main(){
	
	divisionSales North;
	North.division = "North";
	North.firstQuarter;
	North.secondQuarter;
	North.thirdQuarter;
	North.fourthQuarter;
	North.total;
	North.average;
	
	divisionSales South;
	South.division = "South";
	South.firstQuarter;
	South.secondQuarter;
	South.thirdQuarter;
	South.fourthQuarter;
	South.total;
	South.average;
	
	divisionSales East;
	East.division = "East";
	East.firstQuarter;
	East.secondQuarter;
	East.thirdQuarter;
	East.fourthQuarter;
	East.total;
	East.average;
	
	divisionSales West;
	West.division = "West";
	West.firstQuarter;
	West.secondQuarter;
	West.thirdQuarter;
	West.fourthQuarter;
	West.total;
	West.average;
	
	divisionSales array[] = {North, South, East, West};
	
	for (int i = 0; i < 4; i++){
		show(array[i]);
	}
	return 0;
}

void show(divisionSales data){
	cout << "Division: " << data.division << endl;
	cout << "Please enter the sales for the first quarter: $ ";
	cin >> data.firstQuarter;
	cout << "Please enter the sales for the second quarter: $ ";
	cin >> data.secondQuarter;
	cout << "Please enter the sales for the third quarter: $ ";
	cin >> data.thirdQuarter;
	cout << "Please enter the sales for the fourth quarter: $ ";
	cin >> data.fourthQuarter;
	if(data.firstQuarter < 0 || data.secondQuarter < 0 || data.thirdQuarter < 0 || data.fourthQuarter < 0){
		cout << "Sorry, invalid data, please enter positive values only";
	} else {
		data.total = data.firstQuarter + data.secondQuarter + data.thirdQuarter + data.fourthQuarter;
		data.average = data.total / 4;
		cout << "The total of the sales is: $ " << data.total << endl;
		cout << "The average of the sales is: $ " << data.average << endl;
	}
	cout << endl;
}
