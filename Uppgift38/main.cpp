#include <iostream>

using namespace std;

// Fahrenheit = C * 1.8 + 32

float FunctionCalculator(float celcius, float fahrenheit) {
	
	fahrenheit = celcius * 1.8 + 32;
	
	return fahrenheit;
}




void FunctionTemp() {
	float celcius, fahrenheit;
	
	cout << "Vad är temperaturen i celsius ";
	cin >> celcius;
	
	
	cout << "Fahrenheit: " << FunctionCalculator(celcius, fahrenheit);
}









int main(int argc, char** argv) {
	FunctionTemp();
	return 0;
}
