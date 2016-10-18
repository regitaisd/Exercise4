#include <iostream>
#include <string>
using namespace std;

struct customer{
	string name;
	string address;
	string city;
	int phone;
	unsigned int balance;
	int payment;
};

int main(){
	customer list[10];
	
	for(int i = 1; i <= 10; i++){
		cout << "Name: ";
		getline(cin, list[i].name);
		cout << "Address: ";
		getline(cin, list[i].address);
		cout << "City, State, ZIP: ";
		getline(cin, list[i].city);
		cout << "Phone number: ";
		cin >> list[i].phone;
		cout << "Account balance: ";
		cin >> list[i].balance;
		cout << "Date of last payment: ";
		cin >> list[i].payment;
		cout << endl << endl;
		cin.ignore();
	}
}
