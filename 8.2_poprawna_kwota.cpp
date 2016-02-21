#include <iostream>

using namespace std;

bool poprawnaKwota(int kwota)
{
if (kwota > 0) return (kwota%50)==0;
else return 0;

}

int main()
    {
        int stanKonta = 2500;   // stan naszego konta; gdy zaczynamy korzystaæ z bankomatu mamy 2500 z³
        int kwota;              // kwota, któr¹ bedziemy wyplacaæ z bankomatu

        // na poczatku programu informujemy uzytkownika ile ma kasy
        cout << "Stan twojego konta: "      // ten cout jest zapisany w dwoch liniach zamiast jednej
            << stanKonta << endl << endl;   // zauwaz, ze srednik jest tylko na koncu drugiej linii

        while( stanKonta >= 0 ) // warunek wykonania -> musimy miec PLN na koncie, aby wyplaciæ
        {
			cout << "Podaj kwote" << endl;
            cin >> kwota; // u¿ytkownik wpisuje kwotê; zwróæ uwagê, ¿e strza³ki s¹ w drug¹ stronê ni¿ przy cout
            
            poprawnaKwota(kwota);
            
			if (kwota == 0) 
			{
			cout << "Dziekujemy za korzystanie z naszego bankomatu";
			break;
			}

			if (kwota < 0)
			{
				cout << "Kwota musi byc dodatnia" << endl;
				continue;
			}
            
            if (poprawnaKwota(kwota)) // czy u¿ytkownik ma na koncie tyle pieniêdzy, ile chce wyplaciæ?
            {
                stanKonta = stanKonta - kwota; // to samo mozna zapisac jako: stanKonta -= kwota;
                cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji wynosi: " << stanKonta << endl;
            }
            	
			else    // chcesz wyplaciæ wiecej niz masz pieniêdzy na koncie
            {
                cout << "Kwota musi byc dodatnia wielokrotnoscia 50. Stan twojego konta wynosi: " << stanKonta << endl;
            }
        }
        return 0;
    }   
