#include <iostream>

using namespace std;

enum menu {wyjscie,saldo,wyp_50,wyp_100,inna_kw};

int wybor;

int main()
    {
        int stanKonta = 2500;   // stan naszego konta; gdy zaczynamy korzysta� z bankomatu mamy 2500 z�
        int kwota;              // kwota, kt�r� bedziemy wyplaca� z bankomatu

		while( stanKonta >= 0) // warunek wykonania -> musimy miec PLN na koncie, aby wyplaci�
        {
        	
		cout << " 0 - wyjscie z programy \n 1 - stan salda \n 2 - szybka wyplata 50zl \n 3 - szybka wyplata 100zl \n 4 - wyplata innej kwoty \n"; 
		cout << "Wybierz numer operacji do wykonania: ";
		cin >> wybor;
		
if (wybor ==0) break;
		
		switch (wybor)
		{
			case wyjscie : break;
			case saldo : cout << stanKonta << endl; break;
			case wyp_50 : {
				stanKonta -= 50;
				cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji wynosi: " << stanKonta << endl << endl;
				break;
			}
			case wyp_100 : {
				stanKonta -=100;
				cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji wynosi: " << stanKonta << endl << endl;
				break;
			}
			case inna_kw : {

			cout << "Podaj kwote" << endl << endl;
            cin >> kwota; // u�ytkownik wpisuje kwot�; zwr�� uwag�, �e strza�ki s� w drug� stron� ni� przy cout
            
            if (kwota == 0) 
			{
			break;
			}

			if (kwota < 0)
			{
				cout << "Kwota musi byc dodatnia" << endl << endl;
				continue;
			}
            
            if ( kwota <= stanKonta) // czy u�ytkownik ma na koncie tyle pieni�dzy, ile chce wyplaci�?
            {
                stanKonta = stanKonta - kwota; // to samo mozna zapisac jako: stanKonta -= kwota;
                cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji wynosi: " << stanKonta << endl << endl;
            }
            	
			else    // chcesz wyplaci� wiecej niz masz pieni�dzy na koncie
            {
                cout << "Nie masz wystarczajacych srodkow na koncie. Stan twojego konta wynosi: " << stanKonta << endl << endl;
            }
        }
	}
}
//		while( stanKonta >= 0 ) // warunek wykonania -> musimy miec PLN na koncie, aby wyplaci�
//        {
//			cout << "Podaj kwote" << endl;
//            cin >> kwota; // u�ytkownik wpisuje kwot�; zwr�� uwag�, �e strza�ki s� w drug� stron� ni� przy cout
//            
//
//        }
        			cout << "Dziekujemy za korzystanie z naszego bankomatu";
        return 0;
    }  
