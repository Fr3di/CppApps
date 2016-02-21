#include <iostream>

using namespace std;

int main()
{
	int liczba,n=0;
		
	while (liczba != 42)
	{
	if (n != 10)
	{

	cout << "Podaj liczbe: ";
	cin >> liczba;
	
	if (liczba > 42)
	{
		cout << "Liczba " << liczba << " to za duzo";
	}
	
	if (liczba < 42)
	{
		cout << "Liczba " << liczba << " to za malo";
	}

	}
	
	else
	{
	cout << "Niestety, nie zgadles w 10 rundach, przegrywasz";
	break;
	}
	n++;
		
	}
	cout << "Brawo, wygrales po " << n << " probach";
	return 0;
}
