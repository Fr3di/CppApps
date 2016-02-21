#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

int swapNum(int *num1, int *num2)
{
	int *num3, num;
	num3=&num;
	
	*num3=*num2;
	*num2=*num1;
	*num1=*num3;
	
	return 0;
}

char reverseText(char *text)
{
	using namespace std;
	int i,j=0;
	
	char tab[strlen(text)];
	char *pTab1;
	
//	cout << strlen(text);

	strcpy(tab,text);
	
	
	for (i=strlen(text)-1;i>=0;i--)
	{
		text[j]=tab[i];
		j++;
	}
	
//	cout << strlen(tab);
	
//	strcpy(text,tab);


}

int main()
{
	using namespace std;

	int x=66,y=-22;
	char ala[]="dlaczego to niedziala";
	char *pTekst = ala;
		
	swapNum(&x, &y);
	cout << x << " " << y << endl;
	reverseText(pTekst);
	cout << pTekst;
	
	return 0;	
}
