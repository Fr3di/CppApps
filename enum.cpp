#include <iostream>

using namespace std;

enum figury
{
     dziewiatka = 9,
     dziesiatka,
     walet,
     dama,
     krol,
     as
};

enum kolory
{
     pik = 40,
     trefl = 60,
     caro = 80,
     kier = 100
};

int liczba1,liczba2;

int main()
{

cout << "Podaj 2 liczby oddzielone spacja: ";
cin >> liczba1 >> liczba2;

switch (liczba1)
{
	case dziewiatka : cout << "dziewiatka "; break;
	case dziesiatka : cout << "dziesiatka "; break;
	case walet : cout << "walet "; break;
	case dama : cout << "dama "; break;
	case krol : cout << "krol "; break;
	case as : cout << "as "; break;
	default : cout << "niepoprawna wartosc "; break;
}

switch (liczba2)
{
	case pik : cout << "pik"; break;
	case trefl : cout << "trefl"; break;
	case caro : cout << "caro"; break;
	case kier : cout << "kier"; break;
	default : cout << "niepoprawna wartosc"; break;
}

	return 0;
}
