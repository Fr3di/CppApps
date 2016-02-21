#include <iostream>

using namespace std;

int main()
{
int wynik=0,i,liczba;

cout << "Prosze podac liczbe z przedzialu od 1 do 1000: ";
cin >> liczba;

if (liczba>=1 and liczba<=1000)
{
for (i=1; i<=liczba; i++)
{
	wynik+=i;
}
cout << wynik;
}
else cout << "0";

	return 0;
}
