#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, user, ai = 0;
	char restart = 'Y';
	
	srand(time(0));
	
	while(restart == 'Y') {
		
	while(random > 100 or random < 1) {
		random = (rand() % 100) + 1;
	}
	
	

	for(int i = 0; i < 5 and user != random and ai != random; i++) {
		
		cout << "Gissa ett nummer mellan 1-100: ";
		cin >> user;
		
		if(user == random) {
			cout << "Correct! You win!";
		} else if(user < random) {
			cout << "Numret �r st�rre �n " << user << endl;
		} else if(user > random) {
			cout << "Numret �r mindre �n " << user << endl;
		}
		
		while(ai > 100 or ai < 1) {
			ai = rand() % 100 + 1;
		}
		
		if(user == random) {
	
		} else if(ai == random) {
			cout << "AI wins! Numret var: " << random;
		} else if(ai < random) {
			cout << "AI guessed " << ai << " Numret �r st�rre �n" << endl;
		} else if(ai > random) {
			cout << "AI guessed " << ai << " Numret �r mindre �n." << endl;
		}
		ai = 0;
	}
	
	
	
	cout << "Vill du spela igen? Y/N: ";
	cin >> restart;
	}
	
	return 0;
}
