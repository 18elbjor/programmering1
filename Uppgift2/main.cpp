#include <iostream>

using namespace std;

int main() {
	int today, lastyear, sum;
	cout << "Idag? ";
	cin >> today;
	cout << "Förra året?";
	cin >> lastyear;
	sum = today + lastyear;
	cout << "Totalt: " << sum << endl;
	
	float fuel, fuelusage;
	
	
	
	cout << "Hur mycket bensin just nu? ";
	cin >> fuel;
	
	fuelusage = sum / fuel;
	
	cout << "Bensin per mil är: " << fuelusage;
	
	return 0;
}
