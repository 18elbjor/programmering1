#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int Randomiser(int max, int min) {
	int resultat;
	srand(time(NULL));
	
	while(resultat > max or resultat < min) {
	resultat = (rand() % max) + min;
	}
	return resultat;
}

int main(int argc, char** argv) {
	int max, min;
	
	cout << "Max number: ";
	cin >> max;
	cout << "Min number: ";
	cin >> min;
	
	cout << Randomiser(max, min);
	
	return 0;
}
