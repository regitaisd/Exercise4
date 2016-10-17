#include <iostream>
#include <string>
using namespace std;

struct MovieData{
	string title;
	string director;
	int year;
	int time;
};

void printMovieData(MovieData movie);

int main(){
	
	MovieData movieA;
	movieA.title = "The Imitation Game";
	movieA.director = "Morten Tyldum";
	movieA.year = 2014;
	movieA.time = 114;
	
	MovieData movieB;
	movieB.title = "Ada Apa Dengan Cinta";
	movieB.director = "Rudi Soedjarwo";
    movieB.year = 2002;
	movieB.time = 112;
	
	MovieData array[] = {movieA, movieB};
	
	for(int i = 0; i < 2; i++){
		printMovieData(array[i]);
	}
	
	return 0;
}

void printMovieData(MovieData movie){
	cout << movie.title << endl;
	cout << movie.director << endl;
	cout << movie.year << endl;
	cout << movie.time << endl;
	cout << endl;
}
