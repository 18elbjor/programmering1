#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, user;
	srand(time(0));
	

	while(random > 100 or random < 1) {
	random = (rand() % 100) + 1;
	}
	

	for(int i = 0; i < 5; i++) {
		
		cout << "Gissa ett tal mellan 1 och 100: ";
		cin >> user;
		
		if(user == random) {
			cout << "Correct! You Win!";
			return 0;
		} else if(user < random) {
			cout << "Talet �r st�rre �n " << user << endl;
		} else if(user > random) {
			cout << "Talet �r mindre �n " << user << endl;
		}
	}
	
	cout << "You didn't guess the number :(";
	
	return 0;
}
