#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <algorithm>

using namespace std;

/**********************
Klasa opisujaca ksiazke
**********************/
class ksiazka
{
public:
	// enum tez trafil do definicji klasy
	enum kategoriaKsiazki {powiesc, poradnik, dzieciece};
	string tytul;
	string autor;
	kategoriaKsiazki kategoria;
	float cena;
	string ISBN;
	unsigned int iloscWMagazynie; // nowa zmienna

	// funkcja zwroci ilosc ksiazek dostepnych w magazynie
	unsigned int sprawdzDostepnosc();

	// funkcja zwroci true, jezeli sprzedaz sie udala
	bool sprzedajKsiazke(unsigned int ilosc);

	void zmienCene(float nowaCena);
};

void ksiazka::zmienCene(float nowaCena)
{
	cout << "Zmieniono cene ksiazki \"" << tytul << "\". Stara cena: " << cena;
	cena = nowaCena;
	cout << ". Nowa cena: " << cena << "\n" ;
	return;
}

unsigned int ksiazka::sprawdzDostepnosc()
{
	return iloscWMagazynie;
}

bool ksiazka::sprzedajKsiazke(unsigned int ilosc)
{
	if (iloscWMagazynie < ilosc)
	{
		cout << "Nie ma wystarczajacej ilosci egzemplarzy w magazynie!\n";
		return false;
	}

	iloscWMagazynie -= ilosc;
	cout << "Sprzedano " << ilosc << " egzemplarzy ksiazki \"" << tytul << "\".\n";
	return true;
}



/**********************
Klasa opisujaca katalog
**********************/
class katalogKsiazek
{
public:
	int wyszukajKsiazkePoNumerze(string numerISBN);
	// Funkcja zwroci indeks, pod ktorym w naszym katalogu znajduje sie
	// ksiazka z tym numerem ISBN

	int wyszukajKsiazkePoTytule(string tytul);
	// Funkcja zwroci indeks, pod ktorym w naszym katalogu znajduje sie
	// ksiazka o tym tytule

	int dodajKsiazke(ksiazka egzemplarz);
	// Doda nowa ksiazke do katalogu i zwroci jej indeks

private:
	static const unsigned int rozmiarKatalogu = 2;
	ksiazka katalog[rozmiarKatalogu];
};

int katalogKsiazek::wyszukajKsiazkePoNumerze(string numerISBN)
{
	return 0;
}

int katalogKsiazek::wyszukajKsiazkePoTytule(string tytul)
{
	return 0;
}

int katalogKsiazek::dodajKsiazke(ksiazka egzemplarz)
{
	unsigned int licznikKsiazek = 0;
	int liczba;
	
	while((liczba=egzemplarz.ISBN.find('-')) != -1) egzemplarz.ISBN.erase(liczba,1);
	
	while (katalog[licznikKsiazek].ISBN != "" || licznikKsiazek >= rozmiarKatalogu - 1)
	{
		// chcemy dodac ksiazke na koniec tablicy
		licznikKsiazek++;
	}


	if (licznikKsiazek >= rozmiarKatalogu - 1)
	{
		cout << "Brak miejsca w katalogu na nowa pozycje" << endl;
		return licznikKsiazek;
	}

	
	
	katalog[licznikKsiazek] = egzemplarz;

	cout << "Ksiazek w magazynie: " << licznikKsiazek + 1 << endl;
	
//	cout << egzemplarz.ISBN;
	
	return licznikKsiazek;
}



/**********************
Program glowny
**********************/
int main()
{
	katalogKsiazek taniaKsiegarnia;
	// Dlaczego taka nazwa: poniewaz mozemy miec duzo obiektow
	// typu katalogKsiazek. A ten katalog sluzy do katalogowania
	// ksiazek w ksiegarni o nazwie Tania Ksiegarnia.

	ksiazka nowa = { "Alkoholik - instrukcja obslugi", "Glowacz Ewelina",
					ksiazka::poradnik, 29.90, "9788362329960", 2 };
	taniaKsiegarnia.dodajKsiazke(nowa);
	
	nowa = { "Zamien chemie na jedzenie", "Julita Bator",
					ksiazka::poradnik, 28.99, "97-883240-2045-4", 2 };
	taniaKsiegarnia.dodajKsiazke(nowa);

	string tytulSzukany = "Ania z zielonego wzgorza";
	taniaKsiegarnia.wyszukajKsiazkePoTytule(tytulSzukany);

	return 0;
}
