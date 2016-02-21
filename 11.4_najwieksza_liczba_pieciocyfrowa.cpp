#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

int greatestNumber(char *c)
{
	int liczba, max, i=0;
	
	max=c[i];
	
	max=(c[i]-48)*10000+(c[i+1]-48)*1000+(c[i+2]-48)*100+(c[i+3]-48)*10+(c[i+4]-48);
	
	for(int i=1; i<strlen(c)-4; i++)
	{
		liczba=(c[i]-48)*10000+(c[i+1]-48)*1000+(c[i+2]-48)*100+(c[i+3]-48)*10+(c[i+4]-48);
		if(liczba>max) max=liczba;
	}
	
	return max;
}

int main()
{
	using namespace std;
	
	char digits[] = "8457683904820389485738";
	int maxNumber = 0;

	maxNumber = greatestNumber(digits);
	cout << maxNumber; // Na ekranie pojawi sie liczba 94857
	return 0;
}
