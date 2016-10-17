#include <iostream>
#include <string>
using namespace std;

struct weather{
	string month;
	float rainfall;
	float highTemp;
	float lowTemp;
	float avgTemp;
};

void show(weather data);

int main(){
	
	weather jan = {"January", jan.rainfall, jan.highTemp, jan.lowTemp, jan.avgTemp};
	weather feb = {"February", feb.rainfall, feb.highTemp, feb.lowTemp, feb.avgTemp};
	weather mar = {"March", mar.rainfall, mar.highTemp, mar.lowTemp, mar.avgTemp};
	weather apr = {"April", apr.rainfall, apr.highTemp, apr.lowTemp, apr.avgTemp};
	weather may = {"May", may.rainfall, may.highTemp, may.lowTemp, may.avgTemp};
	weather jun = {"June", jun.rainfall, jun.highTemp, jun.lowTemp, jun.avgTemp};
	weather jul = {"July", jul.rainfall, jul.highTemp, jul.lowTemp, jul.avgTemp};
	weather aug = {"August", aug.rainfall, aug.highTemp, aug.lowTemp, aug.avgTemp};
	weather sep = {"September", sep.rainfall, sep.highTemp, sep.lowTemp, sep.avgTemp};
	weather oct = {"October", oct.rainfall, oct.highTemp, oct.lowTemp, oct.avgTemp};
	weather nov = {"November", nov.rainfall, nov.highTemp, nov.lowTemp, nov.avgTemp};
	weather dec = {"December", dec.rainfall, dec.highTemp, dec.lowTemp, dec.avgTemp};
	
	show(jan);
	show(feb);
	show(mar);
	show(apr);
	show(may);
	show(jun);
	show(jul);
	show(aug);
	show(sep);
	show(oct);
	show(nov);
	show(dec);
	
	return 0;
}

void show(weather data){
	cout << "Month: " << data.month << endl;
	cout << "Rainfall: ";
	cin >> data.rainfall;
	cout << "Highest Temperature: ";
	cin >> data.highTemp;
	cout << "Lowest Temperature: ";
	cin >> data.lowTemp;
	if(data.lowTemp < -100 || data.highTemp > 140){
		cout << "sorry. input invalid";
	} else {
		data.avgTemp = data.highTemp + data.lowTemp / 2;
	    cout << "Average Temperature: " << data.avgTemp << endl;
	}
	cout << endl;
}
