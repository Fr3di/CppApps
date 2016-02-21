#include <iostream>

using namespace std;

float wzrost,waga,bmi;


int main()
    {

	cout << "Prosze podac swoja wage w kg: ";
	cin >> waga;
	cout << "Prosze podac swoj wzrost w cm: ";
	cin >> wzrost;
	
	bmi=waga/(wzrost/100*wzrost/100);
	
	if (bmi < 16.0)
	{
		cout << "Twoj BMI wynosi " << bmi << " = nadwaga";
	}
	else if (bmi >= 16.0 and bmi <= 16.99)
	{
		cout << "Twoj BMI wynosi " << bmi << " = wychudzenie";
	}
	else if (bmi >= 17.0 and bmi <= 18.49)
	{
		cout << "Twoj BMI wynosi " << bmi << " = niedowaga";
	}	
	else if (bmi >= 18.5 and bmi <= 24.99)
	{
		cout << "Twoj BMI wynosi " << bmi << " = prawidlowe";
	}	
	else if (bmi >= 25.0 and bmi <= 29.99)
	{
		cout << "Twoj BMI wynosi " << bmi << " = nadwaga";
	}	
	else if (bmi >= 30.0 and bmi <= 34.99)
	{
		cout << "Twoj BMI wynosi " << bmi << " = 1 stopien otylosci";
	}
	else if (bmi >= 35.0 and bmi <= 39.99)
	{
		cout << "Twoj BMI wynosi " << bmi << " = 2 stopien otylosci";
	}	
	else if (bmi >= 40.0)
	{
		cout << "Twoj BMI wynosi " << bmi << " = 3 stopien otylosci";
	}
		
        return 0;
    }  
