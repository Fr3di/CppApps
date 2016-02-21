#include <iostream>

using namespace std;

int main()
{
int wynik=0,i;

	for (i=0; i<15; i++) cout << "*";
	cout << endl;
	
	for (i=21; i<=40; i++) wynik+=i;

	cout << wynik;
	cout << endl;
	
	for (i=30; i>=20; i--) cout << i << " ";

	return 0;
}
