#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int tal1, tal2, tal3;
	
	cout << "skriv tal 1" << endl;
	cin >> tal1;
	cout << "skriv tal 2" << endl;
	cin >> tal2;
	cout << "Skriv tal 3" << endl;
	cin >> tal3;
	
	if (tal1 > tal2 && tal3) {
	cout << tal1;
	}
	
	else if (tal2 > tal1 && tal3) {
		cout << tal2;
	}
	
	else (tal3 < tal1 && tal2) ;{
		cout << tal3;
	}
	
	
	return 0;
}
