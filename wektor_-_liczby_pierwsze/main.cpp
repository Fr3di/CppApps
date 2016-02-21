#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(2);
    //vec.push_back(3);
    //vec.push_back(5);

    int n;
    do
    {
    cout << "Podaj ilosc liczb pierwszych do wygenerowania > 0: ";
    cin >> n;
    }
    while(n <= 0);

    int p, q, i, k = 1, d = 1;

    while (vec.size() < n)
    {
        p = 6 * k + d;
        q = int(sqrt(p));
        for(i = 2; vec[i] <= q; i++)
            if(!(p % vec[i]))
            {
                p = 0; break;
            }
        if(p)
            vec.push_back(p);

        if(d == -1) d = 1;
        else
        {
            d = -1; k++;
        }
    }

    for(i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;

    system("PAUSE");
    system("cls");

    return 0;
}
