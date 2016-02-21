#include <iostream>

using namespace std;

enum kierunkowe
{
	Warszawa = 22,
	Krakow = 12,
	Lodz = 42,
	Wroclaw = 71,
	Poznan = 61,
	Gdansk = 58,
	Szczecin = 91,
	Bydgoszcz = 52,
	Lublin = 81,
	Katowice = 32
};

int main() {

unsigned int kier, numer;
	
cout << "Podaj numer telefonu wraz z numerem kierunkowym: ";
cin >> numer;

kier=numer/10000000;

switch(kier)
{
	case Warszawa:
		cout << "Warszawa";
		break;
	case Krakow:
		cout << "Krakow";
		break;
	case Lodz:
		cout <<"Lodz";
		break;
	case Wroclaw:
		cout << "Wroclaw";
		break;
	case Poznan:
		cout << "Poznan";
		break;
	case Gdansk:
		cout << "Gdansk";
		break;
	case Szczecin:
		cout << "Szczecin";
		break;
	case Bydgoszcz:
		cout << "Bydgoszcz";
		break;
	case Lublin:
		cout << "Lublin";
		break;
	case Katowice:
		cout << "Katowice";
		break;
	default:
		cout << "Nieznane miasto";
		break;
}

	return 0;
}
