#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

void top10(int *wyniki, int nowyWynik)
{
	
	for(int i=0; i<10; i++)
	{
		if(nowyWynik > wyniki[i])
		{
		
			for(int j = 10 - 2; j >= i; j--) wyniki[j + 1] = wyniki[j];
			wyniki[i]=nowyWynik;
			break;
		}
	}

}

void drukuj(int *tab)
{
	cout << "Top 10 results: \n" ;
	for (int i = 0; i <= 9; i++)
	{
		cout << i + 1 << ". " << *(tab + i) << " points \n" ;
	}
}

int main()
{
	const int rozmiar = 10;
	int wyniki[rozmiar] = {10,9,8,7,6,5,4,3,2,1};

	top10(wyniki, 7);
	top10(wyniki, 12);
	drukuj(wyniki);

	return 0;
}
