#include <iostream>

using namespace std;

int main()
{
    for(int i = 100; i < 201; i++)
    {
        int suma = 0;
        int n = i;
        while (n != 0)
        {
            suma += n % 10;
            n /= 10;
            //cout << "Suma = " << suma << endl;
        }
        if(!(suma % 3)) cout << i << endl;
    }
    return 0;
}
