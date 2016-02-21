#include <iostream>

using namespace std;



int main() {
	
	int i=1;
	
	while (i<=100)
	{
		if (i%5==0 and i%3==0) cout << "FizzBuzz";
		else if (i%3==0)
			cout << "Fizz";
		else if (i%5==0)
			cout << "Buzz";
		else
			cout << i;
		cout << " ";
		i++;
	}
	
	return 0;
}
