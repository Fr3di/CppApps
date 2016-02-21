#include <iostream>

using namespace std;


int main() {
	
long long int pesel, i;
int cyfry[11], l=11, kontrol;



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

if (cyfry[3]>=8 and cyfry[3]<=9) cout << "18";
else if (cyfry[3]>=0 and cyfry[3]<=1) cout << "19";
else if (cyfry[3]>=2 and cyfry[3]<=3) cout << "20";
else if (cyfry[3]>=4 and cyfry[3]<=5) cout << "21";
else if (cyfry[3]>=6 and cyfry[3]<=7) cout << "22";
	cout << cyfry[1] << cyfry[2];
}

	return 0;
}
