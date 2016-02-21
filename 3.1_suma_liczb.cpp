#include <iostream>

using namespace std;

int main()
{
	int liczba,wynik=0;
	
	while (liczba != 0)
	{
	cout << "Podaj liczbe: ";
	cin >> liczba;
	wynik += liczba;
	}

	cout << wynik;
	return 0;
}
