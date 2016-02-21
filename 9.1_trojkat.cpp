#include <iostream>

using namespace std;

enum rodzajTrojkata
{
	BRAK,		// jezeli nie mozna stworzyc trojkata
	PROSTOKATNY,	// jezeli trojkat jest prostokatny
	ROZWARTOKATNY,	// jezeli trojkat jest rozwartokatny
	OSTROKATNY	// jezeli trojkat jest ostrokatny
};

int jakiTrojkat(float a, float b, float c)
{

	rodzajTrojkata trojkat;
	
	
	if (a+b>c && a+c>b && b+c>a)
	{
	
		if ((a*a+b*b==c*c) || (b*b+c*c==a*a) || (a*a+c*c==b*b)) trojkat=PROSTOKATNY;
		else if ((a*a+b*b<c*c) || (b*b+c*c<a*a) || (a*a+c*c<b*b)) trojkat=ROZWARTOKATNY;
		else if ((a*a+b*b>c*c) || (b*b+c*c>a*a) || (a*a+c*c>b*b)) trojkat=OSTROKATNY;

	}
	else
	trojkat=BRAK;
	
	switch(trojkat)
	{
		case BRAK:
			cout << "BRAK";
			return 0;
		case PROSTOKATNY:
			cout << "PROSTOKATNY";
			return 1;
		case ROZWARTOKATNY:
			cout << "ROZWARTOKATNY";
			return 2;
		case OSTROKATNY:
			cout << "OSTROKATNY";
			return 3;
	}
	
	cout << trojkat;	
}


int main() {
	
float a,b,c;

cout << "Podaj dlugosc pierwszego boku (a): ";
cin >> a;
cout << "Podaj dlugosc drugiego boku (b): ";
cin >> b;
cout << "Podaj dlugosc trzeciego boku (c): ";
cin >> c;

jakiTrojkat(a,b,c);

	return 0;
}
