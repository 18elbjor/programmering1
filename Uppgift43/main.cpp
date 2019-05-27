#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, user;
	char restart = 'Y';
	
	srand(time(0));
	
	while(restart == 'Y') {
	while(random > 100 or random < 1) {
	random = (rand() % 100) + 1;
	}
	
	
	for(int i = 0; i < 5; i++) {
		
		cout << "Gissa ett nummer mellan 1 och 100: ";
		cin >> user;
		
		if(user == random) {
			cout << "Correct! You win!";
		} else if(user < random) {
			cout << "Talet är större än  " << user << endl;
		} else if(user > random) {
			cout << "Talet är mindre än  " << user << endl;
		}
	}
	
	cout << "Vill du spela igen (Y/N)";
	cin >> restart;
	}
	
	return 0;
}
