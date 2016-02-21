#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

void scalTablice(int *t1, int *t2, int *t3)
{
	int i,n=0;
	for(i=0; i<5; i++)
	{
		t3[n]=t1[i];
		n++;
	}
	for(i=0; i<5; i++)
	{
		t3[n]=t2[i];
		n++;
	}
}

void sortuj(int *tab)
{
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<9; j++)
		{
			if(tab[j]>tab[j+1])
			{
				int max;
				max=tab[j+1];
				tab[j+1]=tab[j];
				tab[j]=max;
			}
		}
	}	
}

int main()
{
	using namespace std;
	
	const int rozmiar = 5;
	int tabA [rozmiar] = {5,8,12,-5,7};
	int tabB [rozmiar] = {0, -1, -2,-3, 12};
	int tabC [2 * rozmiar] = {0};
	int *ptabA, *ptabB, *ptabC;
	ptabA=tabA;
	ptabB=tabB;
	ptabC=tabC;

	scalTablice(ptabA, ptabB, ptabC);
	cout << "Wynikiem dzialania funkcji scalTablice jest tablica tabC w takiej postaci: \n";
	for (int i=0;i<2*rozmiar;i++)
	{
		cout<<*(ptabC + i)<<" ";
	}

	sortuj(ptabC);
	cout << "\n\nWynikiem dzialania funkcji sortuj jest tablica tabC w takiej postaci: \n";
	for (int i=0;i<2*rozmiar;i++)
	{
		cout<<*(ptabC + i)<<" ";
	}
	return 0;
}
