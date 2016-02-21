#include <iostream>
#include <cmath>

using namespace std;

	float monety[9][2]={{5,10},{2,10},{1,10},{0.5,10},{0.2,10},{0.1,10},{0.05,10},{0.02,10},{0.01,10}};
	int licz=0;
	
float round( float f )
{   
    return floor((f * 100 ) + 0.5) / 100;
}

bool wydajReszte(float ile)
{
	bool parzystosc=0;
	int ile2,sprawdzana;
	int iloscmonet=9;
	
	while (ile>0.0)
	{
		for(int i=0;i<iloscmonet;i++)
		{
			sprawdzana=0;						//zmienna do sprawdzania parzystosci analizowanej waluty
			if(ile>=1.0)						//jezeli kwota jest wieksza od 1zl
			{
				ile2=ile;						//najpierw zajmujemy sie tylko zlotowkami
			}
			else
			{
				ile2=ile*100;					//grosze zamieniamy na int
				
				if(monety[i][0]<1.0 && sprawdzana >=0.1) sprawdzana=monety[i][0]*10;	//przypisanie do sprawdzania parzystosci
				else if(monety[i][0]<0.1) sprawdzana=monety[i][0]*100;					//analizowanej waluty
			}
			
			if(sprawdzana%2==0) parzystosc=1;	//sprawdzanie parzystosci analizowanej walut
			else parzystosc=0;
			
			if(parzystosc==0 && i<8 && ile2%2==0 && (monety[i][0]<ile && ((ile2/(monety[i+1][0]*100))<=monety[i+1][1])))
			{
				continue;	//sprawdzanie czy ile jest parzyste i czy da sie ta kwote wydac monetami parzystymi
							//jezeli tak to omijamy walute nieparzysta i przechodzimy do kolejnej - parzystej
			}
			
			if(i==8 && ile>0.0 && monety[i][1]==0)	//jezeli po przejsciu petli ile>0 i ilosc ostatniej monety wynosi 0
			{
				cout << licz;						//nie mozemy juz wydac tej reszty i wyswietlamy wynik
				return 0;
			}

			if(monety[i][0]<=ile && monety[i][1]>0)
			{

				ile-=monety[i][0];
				ile=round(ile);
			//	cout << ile;
				monety[i][1]--;
			//	cout << monety[i][1] << endl;
			//	cout << ile << endl;
				break;
			}
		}
	}
	licz++;
	return 1;
}

void reset()
{
		for(int i=0;i<9;i++)
	{
		monety[i][1]=10;
	}
	licz=0;
}

int main()
{
	for(int i=0;i<9;i++)	wydajReszte(0.01);
//for(int i=0;i<10;i++)	wydajReszte(0.02);
//for(int i=0;i<10;i++)	wydajReszte(0.05);
//for(int i=0;i<10;i++)	wydajReszte(0.1);
//for(int i=0;i<10;i++)	wydajReszte(0.2);
//for(int i=0;i<10;i++)	wydajReszte(0.5);
//for(int i=0;i<10;i++)	wydajReszte(1);
//for(int i=0;i<10;i++)	wydajReszte(2);
	for(int i=0;i<5;i++)	wydajReszte(0.06);
	
	return 0;
}
