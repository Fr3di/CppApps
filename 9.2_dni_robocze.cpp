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

int workingDay(int initYear, int initMonth, int initDay, int finalYear, int finalMonth, int finalDay)
{
	int i=initYear,j=initMonth, wynik, licz=0, liczdni=0, miesiace[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	
		for (i=2000;i<=initYear;i++)
		{
			j=1;
			if (((i%4==0) && (i%100 !=0)) || (i%400 ==0))	//czy rok jest przestepny??
			{
				miesiace[2]=29;
			}	
			else miesiace[2]=28;
			
			
			if (i!=initYear)									//sprawdzanie dnia tygodnia daty poczatkowej
			{
				for (j=1;j<13;j++) licz+=miesiace[j];
			} 
			else if (j!=initMonth)
				{
				for (j=1;j<initMonth;j++) licz+=miesiace[j];
				}
		}
		
		
		
		for (i=initYear;i<=finalYear;i++)
		{
			j=initYear;
			if (((i%4==0) && (i%100 !=0)) || (i%400 ==0))	//czy rok jest przestepny??
			{
				miesiace[2]=29;
			}	
			else miesiace[2]=28;	
			
			
			if (i!=finalYear)										//sprawdzanie roznicy dni miedzy datami
			{
				for (j=initMonth;j<13;j++) liczdni+=miesiace[j];
			} 
			else if (j!=finalMonth)
				{
				for (j=initMonth;j<finalMonth;j++) liczdni+=miesiace[j];
				}
		}

		if (finalDay != 1) liczdni+=(finalDay);
		
		if (initDay != 1)
		{
		licz+=(initDay-1);
		liczdni-=(initDay-1);	
		}

	wynik=licz%7;
		
	switch(wynik)
	{
		case sobota:
			//cout << "sobota";
			wynik=6;
			break;
		case niedziela:
			//cout << "niedziela";
			wynik=7;
			break;
		case poniedzialek:
			//cout << "poniedzialek";
			wynik=1;
			break;
		case wtorek:
			//cout << "wtorek";
			wynik=2;
			break;
		case sroda:
			//cout << "sroda";
			wynik=3;
			break;
		case czwartek:
			//cout << "czwartek";
			wynik=4;
			break;
		case piatek:
			//cout << "piatek";
			wynik=5;
			break;
	}	


licz=0;
for(i=1;i<=liczdni;i++)
{

	if(wynik!=6 && wynik!=7)
	{
		licz++;
	}
	if(wynik==7) wynik=0;
	wynik++;

}
	
return licz;
}



int main() {

int rok, dzien, miesiac, rok2, miesiac2, dzien2;

	cout << "Podaj poczatkowy rok: ";
	cin >> rok;
	cout << "Podaj poczatkowy miesiac: ";
	cin >> miesiac;
	cout << "Podaj poczatkowy dzien: ";
	cin >> dzien;
	cout << "Podaj koncowy rok: ";
	cin >> rok2;
	cout << "Podaj koncowy miesiac: ";
	cin >> miesiac2;
	cout << "Podaj koncowy dzien: ";
	cin >> dzien2;
	
	workingDay(rok,miesiac,dzien,rok2,miesiac2,dzien2);

	return 0;
}
