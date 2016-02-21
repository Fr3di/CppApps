#include <iostream>

using namespace std;

void rekurencja(int n)
{
    cout << "Odliczanie... " << n << endl;
    if(n > 0)
    {
        rekurencja(n-1);
    }
    cout << n << " ";
}

int main()
{
    rekurencja(9);
    return 0;
}
