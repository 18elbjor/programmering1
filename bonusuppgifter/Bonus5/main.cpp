#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int tal1, tal2, vaxel, tusenkr, hundrakr, femtiokr, tiokr, enkr;
	
vaxel = 0; 
tusenkr = 0;
hundrakr = 0; 
femtiokr = 0; 
tiokr = 0; 
enkr = 0;


	
	cout << "Skriv in hur mycket priset för alla produkter (max 10 000 kr)" << endl;
	cin >> tal1;
	
	while( tal1 < 1 or tal1 > 10000)
	{
		cout << "Skriv in priset mellan 1 - 10000 kr" << endl;
		cin >> tal1;	

	}
	
	cout << "Skriv in hur mycket du betalar" << endl;
	cin >> tal2;
	
	while(tal2 < tal1) {
		cout << "Pengarna du betalar med måste var mer än sjalva priset" << endl;
		cin >> tal2; 
		}
	
	vaxel = tal2 - tal1;
	
	
	while(vaxel > 999) {
		vaxel = vaxel - 1000;
		tusenkr = tusenkr + 1;
	}
	
	while(vaxel > 99) {
		vaxel = vaxel - 100;
		hundrakr = hundrakr + 1;
	}
	
	while(vaxel > 49) {
		vaxel = vaxel - 50;
		femtiokr = femtiokr + 1;
	}
	
	while(vaxel > 9) {
		vaxel = vaxel - 10;
		tiokr = tiokr + 1;
	}
	
	while(vaxel > 0) {
		vaxel = vaxel - 1;
		enkr = enkr + 1;
	}
	
	cout << "Tusenlappar: " << tusenkr << endl;
	cout << "Hundrakr: " << hundrakr << endl;
	cout << "Femtiolappar: " << femtiokr << endl;
	cout << "Tiokr: " << tiokr << endl;
	cout << "Enkr: " << enkr << endl;
	
	return 0;
}
