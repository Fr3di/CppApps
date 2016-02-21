#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

int rzut(int iloscKregli)
{
static int runda = 0;
static int rzut = 0;
static int punkty = 0;
static int strike = 0;		//czy strike
static int poprzedni = 0;		//poprzedni rzut
static int spare = 0;

if(iloscKregli == 10 and rzut==0)
{

	if (strike==0)
	{
		strike=1;
		poprzedni=1;
		punkty+=iloscKregli;
	}
	else if (strike==1)
	{
		strike=2;
		poprzedni=2;
		punkty+=iloscKregli*2;
	}
	cout << "runda " << runda+1 << ", rzut " << rzut+1 << endl;
	runda++;
}

if(iloscKregli!=10 and spare==10)
{
	cout << "runda " << runda+1 << ", rzut " << rzut+1 << endl;
	spare=0;
	punkty+=iloscKregli*2;
	rzut++;
}
else if(iloscKregli!=10 and strike==1 and poprzedni==1 and rzut==0) 
{
	cout << "runda " << runda+1 << ", rzut " << rzut+1 << endl;	
	punkty+=iloscKregli*2;
	poprzedni=0;
	spare+=iloscKregli;
	rzut++;
}
else if(iloscKregli!=10 and strike==2 and poprzedni==2 and rzut==0)
{
	cout << "runda " << runda+1 << ", rzut " << rzut+1 << endl;	
	punkty+=iloscKregli*3;
	spare+=iloscKregli;
	poprzedni=0;
	strike=1;
	rzut++;
}
else if(iloscKregli!=10 and strike==1 and poprzedni==0 and rzut==1) 
{
	cout << "runda " << runda+1 << ", rzut " << rzut+1 << endl;	
	punkty+=iloscKregli*2;
	spare+=iloscKregli;
	strike=0;
	poprzedni=0;
	rzut++;
}
else if(iloscKregli!=10 and strike==0 and rzut==0)
{
	cout << "runda " << runda+1 << ", rzut " << rzut+1 << endl;	
	punkty+=iloscKregli;
	spare+=iloscKregli;
	rzut++;
}
else if(rzut==1)
{
	cout << "runda " << runda+1 << ", rzut " << rzut+1 << endl;
	punkty+=iloscKregli;
	spare+=iloscKregli;
	rzut=0;
	runda++;
	if (spare!=10) spare=0;
}


if(rzut==2)
{
	runda++;
	rzut=0;
	if (spare!=10) spare=0;
}

if(runda==10)
{
	cout << "Koniec gry. Uzyskane punkty: " << punkty << endl;
}	

cout << punkty << endl;;
//cout << spare << endl;

return punkty;	
}



int main()
{

int score=0;

score = rzut(4); // funkcja zwróci 4. Komunikat na ekranie: "runda 1, rzut 1" 
score = rzut(3); // funkcja zwróci 7. Komunikat na ekranie: "runda 1, rzut 2"
score = rzut(10); // funkcja zwróci 17. Kolejne dwa rzuty bêd¹ punktowane podwójnie (strike). Komunikat na ekranie: "runda 2, rzut 1"
score = rzut(8); // funkcja zwróci 33. Rzut by³ punktowany podwójnie. Komunikat na ekranie: "runda 3, rzut 1"
score = rzut(2); // funkcja zwróci 37. Rzut by³ punktowany podwójnie. Kolejny rzut te¿ bêdzie punktowany podwójnie (spare). Komunikat na ekranie: "runda 3, rzut 2"
score = rzut(0); // funkcja zwróci 37. Komunikat na ekranie: "runda 4, rzut 1"
score = rzut(4); // funkcja zwróci 41. Komunikat na ekranie: "runda 4, rzut 2"
score = rzut(7);
score = rzut(3);
score = rzut(7);
score = rzut(1);
score = rzut(10);
score = rzut(10);
score = rzut(6);
score = rzut(2);

	return 0;
}
