#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 using namespace std; 
int main(int argc, char** argv) {
	int tal1;
	
	cout << "Skriv ett nummer" << endl;
	cin >> tal1;
	if(tal1 >= 45 && tal1<=63) {
		cout << "Grattis du vann!" << endl;
	} else{
		cout << "Game over loser";
	}
	
	
	
	return 0;
}
