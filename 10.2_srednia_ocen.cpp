#include <iostream>

float obliczSrednia(int tablica[8][10])
{
	using namespace std;
	
	float srednia[8]={0}; 
	int licz, i, j;

	cout.precision(2);
	
	for (i=0; i<8; i++)
	{
		licz=0;
		
		for (j=0; j<10; j++)
		{
			if(tablica[i][j]!=0)
			{
				srednia[i]+=tablica[i][j];
				licz++;
			}
			if(j==9) srednia[i]/=(licz);
		}
	}

	float j1;
	licz=0;
	
	for (i=0; i<8;i++)
	{
		if (srednia[i]>0)
		{
			j1+=srednia[i];
			cout << srednia[i] << " ";
			licz++;
		}	
	}
	
	cout << endl;
	cout << j1/licz;

return	(j1/licz);
}

int main()
{
	using namespace std;
	
	int tablica[8][10]={{5,4,4,5,4,3,1,6,5,5},{2,4,2,3,2,3,2,3,2,3},{1,6,0,0,0,0,0,0,0,0}};
	
//	cout << tablica[0][2];

	obliczSrednia(tablica);
	
	return 0;
}
