#include <iostream>

using namespace std;

int main() {
	int array[7], summa;
	
	for(int i = 0; i < 7; i++)
	{
	cout << "S�g ett nummer: ";
	cin >> array[i];
	}
	
	for(int addition = 0; addition < 7; addition++)
	{
		summa = summa + array[addition];
	}
	cout << summa << endl;
	
	if(summa > 50)
	{
		cout << "Summan �r st�rre �n 50";
	}
	if(summa < 50)
	{
		cout << "Summan �r mindre �n 50";
	}
	if(summa == 50)
	{
		cout << "Summan �r 50";
	}
	
	return 0;
}
