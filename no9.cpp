#include <iostream>
#include <iomanip>
using namespace std;

struct speaker{
	char name[50];
	int telp;
	char topic[50];
	double fee;
};

int main(){
	const int SIZE = 10;
	
	speaker *ptr;
	ptr = new speaker[SIZE];
	
	for(int i = 0; i < SIZE; i++){
		cout << "Enter name of speaker: ";
		cin >> ptr[i].name;
		cout << "Enter telephone number of speaker: ";
		cin >> ptr[i].telp;
		cout << "Enter the topic the speaker brought: ";
		cin >> ptr[i].topic;
		cout << "Enter the required fee of the speaker: $";
		cin >> ptr[i].fee;
		cout << endl;
		
		if(ptr[i].fee < 0){
			cout << "Program error: please input positive numbers for the fee";
		}
	}
	
	return 0;
}
