#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	
	long long int liczba=9123456789012;
	int n,i,liczba2, rozklad, rozklad1, przyrostek=4;
	
	char *jednostki[]={"","jeden ","dwa ","trzy ","cztery ","piec ","szesc ","siedem ","osiem ","dziewiec ","dziesiec ","jedenascie ","dwanascie ","trzynascie ","czternascie ","pietnascie ","szesnascie ","siedemnascie ","osiemnascie ","dziewietnascie "};
	char *dziesiatki[]={"","dziesiec ","dwadziescia ","trzydziesci ","czterdziesci ","piecdziesiat ","szescdziesiat ","siedemdziesiat ","osiemdziesiat ","dziewiecdziesiat "};
	char *setki[]={"","sto ","dwiescie ","trzysta ","czterysta ","piecset ","szescset ","siedemset ","osiemset ","dziewiecset "};
	char *tysiace[]={"","tys. ","mln. ","mld. ","bln. "};

do
{
cout << "Podaj liczbe z zakresu 1..1000000000000: ";
cin >> liczba;
}
while(liczba<1 || liczba>1000000000000);
	
//	cout << liczba << endl;
	for (n=12;n>=0;n-=3)
	{
		
		rozklad=liczba/pow(10,n);
//		cout << rozklad << endl;

	
		liczba2=rozklad;
		
		
			for(i=3;i>0;i--)
			{
			
				rozklad1=liczba2/pow(10,i-1);
//				cout << rozklad << endl;

				if(liczba2!=0 and i==3 and rozklad1>0) cout << setki[rozklad1];
				
				if(i==2 && liczba2>0 && liczba2<20)
				{
					cout << jednostki[liczba2];
					break;
				}
				else if(liczba2!=0 and i==2 and rozklad1>0) cout << dziesiatki[rozklad1];
				else if(liczba2!=0 and i==1 and rozklad1>0) cout << jednostki[rozklad1];
				
				liczba2%=(int)pow(10,i-1);
//				cout << "licz " << liczba2 << endl;
			
			}
		
		
		if(liczba>0 and rozklad>0) cout << tysiace[przyrostek];

		przyrostek--;
		
		liczba%=(long long int)pow(10,n);
//		cout << "liczba " << liczba<< endl;
	}

return 0;
}
