#include <iostream>
#include <cmath>
#include <cstring>

int ileLiter()
{
	using namespace std;
	
	long long int liczba=9123456789012,poczatek,koniec;
	int n,i,liczba2, rozklad, rozklad1, przyrostek=4,licz=0;
	
	char *jednostki[]={"","jeden ","dwa ","trzy ","cztery ","piec ","szesc ","siedem ","osiem ","dziewiec ","dziesiec ","jedenascie ","dwanascie ","trzynascie ","czternascie ","pietnascie ","szesnascie ","siedemnascie ","osiemnascie ","dziewietnascie "};
	char *dziesiatki[]={"","dziesiec ","dwadziescia ","trzydziesci ","czterdziesci ","piecdziesiat ","szescdziesiat ","siedemdziesiat ","osiemdziesiat ","dziewiecdziesiat "};
	char *setki[]={"","sto ","dwiescie ","trzysta ","czterysta ","piecset ","szescset ","siedemset ","osiemset ","dziewiecset "};
	char *tysiace[]={"","tys. ","mln. ","mld. ","bln. "};


cout << "Podaj liczbe poczatkowa: ";
cin >> poczatek;
cout << "Podaj liczbe koncowa: ";
cin >> koniec;

	
	while (poczatek<=koniec)
	{
		liczba2=poczatek;
		
		if (liczba2==1000)
		{
			licz+=strlen("tysiac");
			cout << licz << endl;
			break;
		}
		
			for(i=3;i>0;i--)
			{
			
				rozklad1=liczba2/pow(10,i-1);
//				cout << rozklad << endl;

				if(liczba2!=0 and i==3 and rozklad1>0) 
				{
					cout << setki[rozklad1];
					licz+=strlen(setki[rozklad1])-1;
				}
				
				if(i==2 && liczba2>0 && liczba2<20)
				{
					cout << jednostki[liczba2];
					licz+=strlen(jednostki[liczba2])-1;

					break;
				}
				else if(liczba2!=0 and i==2 and rozklad1>0) 
				{
					cout << dziesiatki[rozklad1];
					licz+=strlen(dziesiatki[rozklad1])-1;
				}
				else if(liczba2!=0 and i==1 and rozklad1>0)
				{
					cout << jednostki[rozklad1];
					licz+=strlen(jednostki[rozklad1])-1;
				}
			
			liczba2%=(int)pow(10,i-1);
			}
						cout << licz << endl;	
	poczatek++;
//		cout << "liczba " << liczba<< endl;
	}

return licz;
}

int main()
{
	ileLiter();
	return 0;
}
