#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, user, ai = 0;
	char restart = 'Y';
	
	srand(time(0));
	
	while(restart == 'Y') {
	

	int ai_mem_max = 100, ai_mem_min = 1;
		

	while(random > 100 or random < 1) {
		random = (rand() % 100) + 1;
	}
	
	

	for(int i = 0; i < 5 and user != random and ai != random; i++) {
		

		cout << "Gissa ett nummer mellan 1-100: ";
		cin >> user;
		
	
		if(user == random) {
			cout << "Correct! You win!";
		} else if(user < random) {
			cout << "Numret är större än" << user << endl;
			if(ai_mem_min < user) {
				ai_mem_min = user;
			}
		} else if(user > random) {
			cout << "Numret är mindre än " << user << endl;
			if(ai_mem_max > user) {
				ai_mem_max = user;
			}	
		}
		
		while(ai < ai_mem_min and ai != user or ai > ai_mem_max and ai != user) {
			ai = rand() % (ai_mem_max -1) + (ai_mem_min +1);
		}
		
		
		if(user == random) {
			
		} else if(ai == random) {
			cout << "AI wins! Numret var: " << random;
			i = 5;
		} else if(ai < random) {
			cout << "AI guessed " << ai << " Numret var större än" << endl;
			ai_mem_min = ai;
		} else if(ai > random) {
			cout << "AI guessed " << ai << " Numret är mindre än" << endl;
			ai_mem_max = ai;
		}
		ai = 0;
	}
	
	restart = 'd';
	while(restart != 'Y' and restart != 'N') {
		cout << endl << "Vill du spela igen? Y/N: ";
		cin >> restart;
	}
	}
	
	return 0;
}
