#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int dice[5];
	
	for(int i = 0; i < 5; i++) {
		dice[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << dice[i];
		cout << endl;
	}
	return 0;
}
