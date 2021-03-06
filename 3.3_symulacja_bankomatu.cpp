#include <iostream>

using namespace std;

int main()
    {
        int stanKonta = 2500;   // stan naszego konta; gdy zaczynamy korzysta� z bankomatu mamy 2500 z�
        int kwota;              // kwota, kt�r� bedziemy wyplaca� z bankomatu

        // na poczatku programu informujemy uzytkownika ile ma kasy
        cout << "Stan twojego konta: "      // ten cout jest zapisany w dwoch liniach zamiast jednej
            << stanKonta << endl << endl;   // zauwaz, ze srednik jest tylko na koncu drugiej linii

        while( stanKonta >= 0 ) // warunek wykonania -> musimy miec PLN na koncie, aby wyplaci�
        {
			cout << "Podaj kwote" << endl;
            cin >> kwota; // u�ytkownik wpisuje kwot�; zwr�� uwag�, �e strza�ki s� w drug� stron� ni� przy cout
            
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
            
            if ( kwota <= stanKonta) // czy u�ytkownik ma na koncie tyle pieni�dzy, ile chce wyplaci�?
            {
                stanKonta = stanKonta - kwota; // to samo mozna zapisac jako: stanKonta -= kwota;
                cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji wynosi: " << stanKonta << endl;
            }
            	
			else    // chcesz wyplaci� wiecej niz masz pieni�dzy na koncie
            {
                cout << "Nie masz wystarczajacych srodkow na koncie. Stan twojego konta wynosi: " << stanKonta << endl;
            }
        }
        return 0;
    }   
