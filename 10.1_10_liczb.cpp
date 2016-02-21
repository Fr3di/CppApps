#include <iostream>

int main()
{
	using namespace std;
	
	int liczby[10],i,j,sort,max;
	
	
	for (i=1;i<=10;i++)
	{
		cout << "Podaj " << i << " liczbe: ";
		cin >> liczby[i-1];
	}
	
	if(liczby[0]<0)
	{
		for(i=9;i>=0;i--)
		{
			cout << liczby[i] << " ";
		}
	}
	else
	{
		max=liczby[0];
		
		for (i=0;i<10;i++)
		{
			for(j=0;j<9;j++)
			{
				if(liczby[j] > liczby[j+1])
				{
					sort= liczby[j];
					liczby[j]=liczby[j+1];
					liczby[j+1]=sort;
				}
			}
		}
		
		for(i=0;i<10;i++)
		{
			cout << liczby[i] << " ";
		}
	}
	
	return 0;
}
