#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct machine{
	int choice;
	double cost;
	int quantity;
};

int main(){
	
	const int DRINKS = 5;
	int choice;
	
	machine data[DRINKS] = {("Cola", 0.75, 20), ("Root Beer", 0.75, 20),
	                        ("Lemon-Lime", 0.75, 20), ("Grape Soda", 0.80, 20),
							("Cream Soda", 0.80, 20)};
	cout << "Vending Machine Program" << endl;
	cout << "1. Cola" << endl;
	cout << "2. Root Beer" << endl;
	cout << "3. Lemon-Lime" << endl;
	cout << "4. Grape Soda" << endl;
	cout << "5. Cream Soda" << endl;
	cout << "6. Quit the program" << endl;
	cout << "Please enter your choice" << endl;
	cin >> choice;
	
	if(choice > 6 || choice < 0){
		cout << "Program error: that option does not exist. Please re-enter your option";
		cin >> choice;
	}
}


