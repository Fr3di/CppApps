#include <iostream>
#include <cstdlib>
#include <ctime>

int birthdayParadox(int people, int tests)
{
	using namespace std;

	int urodziny[50]={0};
	int proby=0,i,j,n;
	bool flag;	
	
	srand( time( NULL ) );
	
for(n=0;n<tests;n++)
{
	
	urodziny[0]=(rand()%365)+1;
	
	for(i=1;i<people;i++)
	{
		flag=0;
		urodziny[i]=(rand()%365)+1;
		
		for(j=0;j<i;j++)
		{
			if(urodziny[i]==urodziny[j])
			{
				proby++;
				flag=1;
				break;
			}
		}
		
		if (flag) break;
		
	}
	
}
	
//	cout << proby;
	
	return proby;
}

int main()
{
	using namespace std;
	
	int people=23, test=10000;
	
	birthdayParadox(people, test);
	
	return 0;
}
