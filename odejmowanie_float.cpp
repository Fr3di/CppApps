#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a=6.22, b=5, c=1, d=0.2, wynik;
	
	wynik=a-b;
	wynik-=c;
	
	cout << round(wynik-d);
	
	return 0;
}
