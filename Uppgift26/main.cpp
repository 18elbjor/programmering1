#include <iostream>

using namespace std;

int main() {
	int hemlig[5], anvandare[5], ratt = 0;
	
	hemlig[0] = 1;
	hemlig[1] = 5;
	hemlig[2] = 1;
	hemlig[3] = 5;
	hemlig[4] = 1;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "Välj ett nummer: ";
		cin >> anvandare[i];
	}
	
	for(int count = 0; count < 5; count++)
	{
		if(anvandare[count] == hemlig[count])
		{
			cout << "Rätt!" << endl;
			ratt++;
		} else {
			cout << "Fel!" << endl;
		}
	}
	
	if(ratt == 5)
	{
		cout << "Du vann!";
	}
	
	return 0;
}
