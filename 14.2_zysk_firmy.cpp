#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <algorithm>

using namespace std;

class zysk
{
public:
float skladniki = 2.80;
float wynajem = 1300;
float ubezpieczenie = 1000;
float podatek = 0.18;
float cenabulki;
float zyskNetto;
int sprzedaz;	


void ustalCene(float cena);
// ustala cenê jednej bu³ki; cena zostaje zapamiêtana, aby mo¿na by³o obliczyæ zysk i sprzeda¿

int obliczZysk(int iloscSprzedanych);
// oblicza zysk netto dla podanej miesiêcznej sprzeda¿y

int obliczSprzedaz(int spodziewanyZysk);
// oblicza, jaka musi byæ sprzeda¿, aby uzyskaæ spodziewany zysk netto
};

void zysk::ustalCene(float cena)
{
	cenabulki=cena;
	cout << "Nowa cena bulki: " << cenabulki << endl;
}


int zysk::obliczZysk(int iloscSprzedanych)
{
	zyskNetto = ((iloscSprzedanych*(cenabulki-skladniki))-wynajem-ubezpieczenie)*(1-podatek);
	cout << "Zysk Netto: " << zyskNetto << endl;
	return zyskNetto;
}


int zysk::obliczSprzedaz(int spodziewanyZysk)
{
	sprzedaz = ((spodziewanyZysk/(1-podatek))+wynajem+ubezpieczenie)/(cenabulki-skladniki);
	cout << "Sprzedaz: " << sprzedaz << endl;
	return sprzedaz;
}



int main()
{
	zysk zyskMalegoPrzedsiebiorcy;
	int zyskNetto = 0;
	int sprzedaz = 2500;

	zyskMalegoPrzedsiebiorcy.ustalCene(5.00);
	zyskNetto = zyskMalegoPrzedsiebiorcy.obliczZysk(sprzedaz);
	
	cout << "zysk netto na koniec: " << zyskNetto<<endl;
	
	// Obnizmy cene o 20%
	zyskMalegoPrzedsiebiorcy.ustalCene(4.00);
	// O ile musi zwiekszyc sie sprzedaz, aby byl ten sam zysk
	sprzedaz = zyskMalegoPrzedsiebiorcy.obliczSprzedaz(zyskNetto);

	return 0;
}
