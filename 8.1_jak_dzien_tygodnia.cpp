#include <iostream>

using namespace std;

enum tydzien
{
	sobota=0,
	niedziela,
	poniedzialek,
	wtorek,
	sroda,
	czwartek,
	piatek
};

int weekDay(int year, int month, int day)
{
	int i=2000,j=1, wynik, licz=0, miesiace[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	
		for (i=2000;i<=year;i++)
		{
			j=1;
			if (((i%4==0) && (i%100 !=0)) || (i%400 ==0))	//czy rok jest przestepny??
			{
				miesiace[2]=29;
			}	
			else miesiace[2]=28;
			
			
			if (i!=year)
			{
				for (j=1;j<13;j++) licz+=miesiace[j];
			} 
			else if (j!=month)
				{
				for (j=1;j<month;j++) licz+=miesiace[j];
				}
		}

		if (day != 1) licz+=(day-1);

	wynik=licz%7;
		
	switch(wynik)
	{
		case sobota:
			cout << "sobota";
			wynik=6;
			break;
		case niedziela:
			cout << "niedziela";
			wynik=7;
			break;
		case poniedzialek:
			cout << "poniedzialek";
			wynik=1;
			break;
		case wtorek:
			cout << "wtorek";
			wynik=2;
			break;
		case sroda:
			cout << "sroda";
			wynik=3;
			break;
		case czwartek:
			cout << "czwartek";
			wynik=4;
			break;
		case piatek:
			cout << "piatek";
			wynik=5;
			break;
	}	

	
return wynik;
}



int main() {

int rok, dzien, miesiac;

	cout << "Podaj rok: ";
	cin >> rok;
	cout << "Podaj miesiac: ";
	cin >> miesiac;
	cout << "Podaj dzien: ";
	cin >> dzien;
	
	weekDay(rok,miesiac,dzien);

	return 0;
}
