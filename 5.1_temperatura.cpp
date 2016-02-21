#include <iostream>

using namespace std;

int temp,i;
float wynik;

int main()
{

for (i=0; i<=100; i+=10)
{
	wynik = (i-32)/1.8;
	cout << i << " F = " << wynik << " C" << endl;
}
	return 0;
}
