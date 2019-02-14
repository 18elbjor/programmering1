#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

float nuvarande, modell, forsekring;

cout << "Vilket år är det just nu" << endl;
cin >> nuvarande;
cout << "Vad ör bilens årsmodell" << endl;
cin >> modell;

forsekring = nuvarande - modell; 

if (forsekring >= 5 && forsekring <= 25) {
	
	cout << "välj en halvförsäkring";
}

else if (forsekring >= 25) {
	cout << "Välj en veteranbilsförsäkring";
	
}

else {
	cout << "Välj en helförsäkring";
}
	return 0;
}
