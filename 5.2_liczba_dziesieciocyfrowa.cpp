#include <iostream>

using namespace std;

unsigned long long int liczba;

int main()
{

cout << "Podaj liczbe calkowita dodatnia: ";
cin >> liczba;

if (liczba>=1000000000 and liczba <=9999999999) cout << "OK!"; 
else cout << "NOT OK!";

	return 0;
}
