#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string namn, plats, sak, vart, sager, namn2, svar, plats2, dryck, slut;
	
	cout << "V�lj ett namn" << endl;
	cin >> namn;
	cout << "V�lj en plats" << endl;
	cin >> plats;
	cout << "S�g en sak t.ex penna" << endl;
	cin >> sak;
	cout << "Vart hittade personen saken?" << endl;
	cin >> vart;
	cout << "Vad s�ger personen" << endl;
	cin >> sager;
	cout << "N�mn en till person" << endl;
	cin >> namn2;
	cout << "Vad svarade den andra?" << endl;
	cin >> svar;
	cout << "V�lj en till plats " << endl;
	cin >> plats2;
	cout << "V�lj en dryck" << endl;
	cin >> dryck;
	cout << "Vad g�r de till sist" << endl;
	cin >> slut;
	
	system("cls");
	cout << "Det var en g�ng en m�nniska som hette " << namn<< ". " << namn << "bor i " << plats<< "." << "En dag hittade " << namn <<"en "<< sak << "." << " Han ropade ut " << sager << "!" << namn2 << "svarade med" << svar << "De gick sedan till" << plats2 << "och drack" << dryck << "." << "Efter det"<< slut << "och levde lyckliga."<< endl; 
	
	
	
	return 0;
}
