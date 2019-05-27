#include <iostream>

using namespace std;

float CalculatorFunction(float a, float b, float funnet, char funktion, float resultat) {
	
	cout << "Välj en funktion" << endl;
	cin >> a >> funktion >> b;
	
	for(int i = 0; funnet != true; i++)
	{
		if(funktion == '+')
		{
			resultat = a + b;
			funnet = true;
		} else if(funktion == '-') {
			resultat = a - b;
			funnet = true;
		} else if(funktion == '*') {
			resultat = a * b;
			funnet = true;
		} else if(funktion == '/') {
			resultat = a / b;
			funnet = true;
		} else if(i == 50) {
			cout << "Kalkylationen var för lång eller felskriven" << endl;
			funnet = true;
		}
	}
		
	return resultat;
}



int main(int argc, char** argv) {
	char function;
	float a = 0, b = 0, found, result;
	
	result = CalculatorFunction(a, b, found, function, result);
	
	cout << result;
	
	return 0;
}
