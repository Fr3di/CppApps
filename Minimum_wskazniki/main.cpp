#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int rozm;
    cout << "Podaj rozmiar tablicy: ";
    cin >> rozm;
    double tab[rozm];
    for(double *wsktab = tab; wsktab < tab + rozm ; wsktab++)
    {
        *wsktab = (double) rand() / RAND_MAX;
    }

    double *min = tab;
    for(double *wsk = tab+1; wsk < tab + rozm; wsk++)
    {
        cout << wsk << " " << *wsk << endl;
        if( *wsk < *min) min = wsk;
    }

    cout << endl << endl << *min;

    return 0;
}
