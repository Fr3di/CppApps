#include <iostream>


using namespace std;

int main()
{

int i;
bool flag=0;
char znak;
char alfabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

cout << "Podaj litere: ";
cin >> znak;

for (i=0; i<26; i++)
{
	if (alfabet[i]==znak or alfabet[i]==znak+32)
	{
		cout << i+1;
		flag=1;
	}

}
	if (flag==0) cout << flag;
	return 0;
}

