//examples about structures
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct product{
	int weight;
	double price;
} apple,banana,melon;

struct movies_t{
	string title;
	int year;
} mines,yours;

struct movies_a{
	string title;
	int year;
} films[3];


void printmovie(movies_t movie);
void printmovie_a(movies_a movie);

//int main(){
//	string mystr;
//	
//	mines.title="2001 A Space Odyssey";
//	mines.year=1968;
//	
//	cout << "Enter title: ";
//	getline(cin,yours.title);
//	
//	cout<<"Enter year: ";
//	getline(cin,mystr);
//	stringstream(mystr) >> yours.year;
//	
//	cout <<"My favorite movie is:\n";
//	printmovie(mines);
//	cout <<"And yours is:\n ";
//	printmovie(yours);
//	
//	movies_t * pmovie;
//	pmovie  = &mines;
//	
//	cout << "Enter title: ";
//	getline(cin,pmovie->title);
//	
//	cout<<"Enter year: ";
//	getline(cin,mystr);
//	stringstream(mystr) >> pmovie->year;
//	
//	cout << "\nYou have entered:\n";
//	cout<< pmovie->title;
//	cout<<"("<<pmovie->year <<")\n";
//	
//	movies_t *amovie;
//	amovie = &yours;
//	//TODO:how to parameter pointer in the function
//	//printmovie(amovie);
//	return 0;
//}

//int main(){
//	string mystr;
//	
//	int i;
//	for(i=0;i<3;i++){
//		cout<< "Enter title "<<i<<":";
//		getline(cin,films[i].title);
//		cout<< "Enter year:" <<i<<":";
//		getline(cin,mystr);
//		stringstream(mystr) >>films[i].year;
//		
//	}
//	cout<<"\nYou have entered the below movies:\n";
//	for(i=0;i<3;i++)
//		printmovie_a(films[i]);
//	return 0;
//}

void printmovie(movies_t movie){
	cout << movie.title;
	cout << "\t("<< movie.year<<")\n";
}

void printmovie_a(movies_a movie){
	cout << movie.title;
	cout << "\t("<< movie.year<<")\n";
}
