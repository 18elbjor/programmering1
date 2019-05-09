#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string namn, plats, sak, vart, sager, namn2, svar, plats2, dryck, slut;
	
	cout << "Välj ett namn" << endl;
	cin >> namn;
	cout << "Välj en plats" << endl;
	cin >> plats;
	cout << "Säg en sak t.ex penna" << endl;
	cin >> sak;
	cout << "Vart hittade personen saken?" << endl;
	cin >> vart;
	cout << "Vad säger personen" << endl;
	cin >> sager;
	cout << "Nämn en till person" << endl;
	cin >> namn2;
	cout << "Vad svarade den andra?" << endl;
	cin >> svar;
	cout << "Välj en till plats " << endl;
	cin >> plats2;
	cout << "Välj en dryck" << endl;
	cin >> dryck;
	cout << "Vad gör de till sist" << endl;
	cin >> slut;
	
	system("cls");
	cout << "Det var en gång en människa som hette " << namn<< ". " << namn << "bor i " << plats<< "." << "En dag hittade " << namn <<"en "<< sak << "." << " Han ropade ut " << sager << "!" << namn2 << "svarade med" << svar << "De gick sedan till" << plats2 << "och drack" << dryck << "." << "Efter det"<< slut << "och levde lyckliga."<< endl; 
	
	
	
	return 0;
}
