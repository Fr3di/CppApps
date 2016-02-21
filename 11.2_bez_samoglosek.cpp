#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

char discardVowels(char *text)
{
	char samogloski[]="aeiouAEIOU", spolgloski[]=" bcdfghjklmnpqrstwxzBCDFGHJKLMNPQRSTWXZ.";
	char sam[100];
	
	int n=0;
	
	for(int i=0; i<strlen(text); i++)
	{
		for(int j=0; j<strlen(spolgloski); j++)
		{
			if(text[i]==spolgloski[j])
			{
				sam[n]=text[i];
				n++;
			}
		}
	}
	
	strcpy(text,sam);
	
}

	int main()
	{
		using namespace std;
		
		char ala[] = "Ala ma kota mruczka.";
		char *pTekst = ala;		
		
		discardVowels(pTekst);
		cout << pTekst;
	}
