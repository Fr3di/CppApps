#include <iostream>

using namespace std;

bool dateValidation(int year, int month, int day)
{
int miesiace[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

if (((year%4==0) && (year%100 !=0)) || (year%400 ==0))	//czy rok jest przestepny??
			{
				miesiace[2]=29;
			}	
			else miesiace[2]=28;
			
if ((month>0 and month<13) && (day>0 and day<=miesiace[month])) return 1;
else return 0;
	
}


int main() {
	
long long int pesel, i;
int cyfry[11], l=11, kontrol;
int rok,miesiac,dzien;



cout << "Podaj numer PESEL: ";
cin >> pesel;


if (pesel < 10000000000 or pesel > 99999999999)
	cout << "PESEL musi miec 11 cyfr";
else
{
for (i=1; i<=10000000000; i*=10)
	{
	cyfry[l]=(pesel/i)%10;
//	cout << cyfry[l] << endl;
	l--;
	}
	
kontrol = 1*cyfry[1] + 3*cyfry[2] + 7*cyfry[3] + 9*cyfry[4] + 1*cyfry[5] + 3*cyfry[6] + 7*cyfry[7] + 9*cyfry[8] + 1*cyfry[9] + 3*cyfry[10];
if (kontrol%10==0) kontrol=0;
else
kontrol=10-(kontrol%10);

if (kontrol != cyfry[11]) cout << "Niepoprawna cyfra kontrolna" << endl;

if (cyfry[10]%2) cout << "mezczyzna" << endl;
else cout << "kobieta" << endl;

cout << cyfry[5] << cyfry[6] << ".";

if (cyfry[3]==8 or cyfry[3]==9) cout << cyfry[3]-8;
else if (cyfry[3]==2 or cyfry[3]==3) cout << cyfry[3]-2;
else if (cyfry[3]==4 or cyfry[3]==5) cout << cyfry[3]-4;
else if (cyfry[3]==6 or cyfry[3]==7) cout << cyfry[3]-6;
else cout << cyfry[3];

cout << cyfry[4] << ".";

if (cyfry[3]>=8 and cyfry[3]<=9) {cout << "18"; rok=1800;}
else if (cyfry[3]>=0 and cyfry[3]<=1) {cout << "19"; rok=1900;}
else if (cyfry[3]>=2 and cyfry[3]<=3) {cout << "20"; rok=2000;}
else if (cyfry[3]>=4 and cyfry[3]<=5) {cout << "21"; rok=2100;}
else if (cyfry[3]>=6 and cyfry[3]<=7) {cout << "22"; rok=2200;}
	cout << cyfry[1] << cyfry[2] << endl;
}

rok=rok+cyfry[1]*10+cyfry[2];
miesiac=cyfry[3]*10+cyfry[4];
dzien=cyfry[5]*10+cyfry[6];
dateValidation(rok,miesiac,dzien);

if (dateValidation==0) cout << "Nieporawna data!!!";

	return 0;
}
