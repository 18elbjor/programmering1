#include <iostream>

using namespace std;

int main() {
	int kontroll;
	bool run = true;
	
	while(run == true)
	{
		cout << "Vill du stänga programmet? 1 = Ja, 2 = Nej: ";
		cin >> kontroll;
		
		if(kontroll == 1)
		{
			run = false;
		}
	}
	
	return 0;
}
