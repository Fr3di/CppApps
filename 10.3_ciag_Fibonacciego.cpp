#include <iostream>

int fibonacci(int n)
{
	using namespace std;
	
	int liczby[2]={0,1};
	int i,suma;
	
	for (i=0;i<n;i++)
	{
		if (i==0) cout << liczby[0] << " ";
		else if (i==1) cout << liczby[1] << " ";
		else if (i>1)
		{
		suma=liczby[1] + liczby[0];
		liczby[0]=liczby[1];
		liczby[1]=suma;
		cout << suma << " ";
		}
	}
	
	return suma;
}

int main()
{
	using namespace std;
	
	int n=10;
	
	fibonacci(n);
	
	return 0;
}
