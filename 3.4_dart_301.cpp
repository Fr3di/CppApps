#include <iostream>

using namespace std;

int main()
    {
    int runda=1,rzut=1,wynik=301,punkty,bust=301;
    
    while (wynik !=0)
    {
		cout << "Runda " << runda << ", rzut " << rzut << ": Podaj ilosc punktow: ";
    	cin >> punkty;
    	
    	if (punkty == (-1))
    	{
		runda++;
    		break;
    	}
    	
    	if (punkty < 0 or punkty > 60)
    	{
    		cout << "Niepoprawna ilosc punktow" << endl;
    		continue;
    	}
    	else
    	{
			if (bust-punkty < 0)
    		{
    			cout << "Runda " << runda << ", BUST!" << endl;
    			cout << "Liczba twoich punktow: " << wynik << endl;
    			bust=wynik;
				runda++;
    			rzut=1;
    			continue;
    		}
    		else
    		{
    		bust -= punkty;
    		}
    	}

    	if (rzut == 3)
    	{
			cout << "Runda " << runda << ", liczba twoich punktow: " << bust << endl;
			wynik=bust;
			runda++;
    		rzut=0;
    	
    	}
    	rzut++;
    }
    	cout << "Gra zakonczona w rundzie " << runda-1;
        return 0;
    }   
