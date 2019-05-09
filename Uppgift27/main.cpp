#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int restart_bool = 1;
	
	while(restart_bool == true)
	{
	string user_input, restart;;
	float tal1, tal2;
	int wrong = true;
	
	cout << "Vanligen skriv in, Addition, Subtraktion, Multiplikation eller Division" << endl;
	cin >> user_input;
	
	cout << "Skriv in tal 1 och tal 2" << endl;
	cin >> tal1;
	cin >> tal2;
	
	while(wrong == true)
	{
	if(user_input == "Addition")
	{
		cout << tal1 + tal2 << endl;
		wrong = false;
	} 
	else if(user_input == "Subtraktion") {
		cout << tal1 - tal2 << endl;
		wrong = false;
	} 
	else if(user_input == "Multiplikation") {
		cout << tal1 * tal2 << endl;
		wrong = false;
	} 
	else if(user_input == "Division") {
		cout << tal1 / tal2 << endl;
		wrong = false;
	}
	 else {
		cout << "Det kommando du skrev in exsisterar inte!" << endl;
		cout << "Addition, Subtraktion, Multiplikation eller Division" << endl;
		wrong = true;
		cin >> user_input;
	}
	}
	
	cout << "Vill du kora igen?" << endl;
	cin >> restart;
	
	if(restart == "Ja")
	{
		restart_bool = true;
	} 
	else if(restart == "Nej") {
		cout << "Hejda";
		restart_bool = false;
	}
	
	
	} // for restarting
	return 0;
}
