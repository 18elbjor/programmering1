#include <iostream>

using namespace std;

int NumberCalculator(int summa) {
	if(summa != 0) {
		summa = summa + NumberCalculator(summa-1);
	}
	
	return summa;
}

int main(int argc, char** argv) {
	int user_number;
	
	cout << "Välj ett nummer: ";
	cin >> user_number;
	
	cout << NumberCalculator(user_number);
	
	return 0;
}
