#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
//#include <string>
#include <algorithm>

using namespace std;


int main()
{

string s="83-7200-981-3";
long long int l;
int liczba;

//s.erase(remove(s.begin(),s.end(),'-'), s.end());

while((liczba=s.find('-')) != -1) s.erase(liczba,1);		// -1 poniewa¿ jest to wartosc rowna npos, ktora zwracana jest przez find jezeli brak danego znaku w stringu (mozna -1 zastapic przez s.npos)


//int liczba=s.find("-");
//if (liczba>=0) s.erase(liczba,1);

//s.replace("-","");
//s.erase(s.find('-'),1);

l=atoll(s.c_str());											//zamiana string na long long int


//l=stoi(s);

cout<<s;

cout << endl;

cout<<l;

return 0;
}
