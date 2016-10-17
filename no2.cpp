#include <iostream>
#include <string>
using namespace std;

struct MovieData{
	string title;
	string director;
	int year;
	int time;
	float gross;
	float revenue;
};

void printMovieData(MovieData movie);

int main(){
	
	MovieData movieA;
	movieA.title = "The Imitation Game";
	movieA.director = "Morten Tyldum";
	movieA.year = 2014;
	movieA.time = 114;
	movieA.gross = 227.8;
	movieA.revenue = 91.1;
	
	MovieData movieB;
	movieB.title = "Scott Pilgrim vs The World";
	movieB.director = "Edgar Wright";
    movieB.year = 2010;
	movieB.time = 112;
	movieB.gross = 47.6;
	movieB.gross = 31.5;
	
	
	MovieData array[] = {movieA, movieB};
	
	for(int i = 0; i < 2; i++){
		printMovieData(array[i]);
	}
	
	return 0;
}

void printMovieData(MovieData movie){
	float total = movie.gross - movie.revenue;
	cout << "Title: " << movie.title << endl;
	cout << "Director: " << movie.director << endl;
	cout << "Year released: " << movie.year << endl;
	cout << "Running time: " << movie.time << " minutes" << endl;
	cout << "Profit/Loss: $" << total << " million" << endl;
	cout << endl;
}
