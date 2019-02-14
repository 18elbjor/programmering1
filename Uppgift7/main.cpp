#include <iostream>



using namespace std;

int main() {

	int tal1, tal2, tal3, summa, produkt, kvot, differens;
		
	cout <<"Vilket räknesätt (1-4)"<< endl;
	cin >> tal1;
	cout << "Tal ett" << endl;
	cin >> tal2; 
	cout << "Tal två" << endl;
	cin >> tal3;
	
	if(tal1 = 1) {
	summa = tal2 + tal3;
	cout << "Svar:" << summa << endl;
	return 0;
	}
	
	if(tal1 = 2) {
	produkt = tal2 * tal3;
	cout << "Svar:" << produkt << endl; 
	return 0;
	}
	
	if(tal1 = 3 ) {
	kvot = tal2 / tal3;
	cout << "Svar:" << kvot << endl;
	return 0;
	}
	
	if(tal1 = 4) {
	differens = tal2 - tal3;
	cout << "Svar:" << differens << endl;
	return 0;
	}
	

}
