#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	int tal1, max, min;
	
	cout << "Max number: ";
	cin >> max;
	cout << "Min number: ";
	cin >> min;
	
	while(tal1 > max or tal1 < min) {
	tal1 = (rand() % max) + min;
	}
	
	cout << tal1;
	
	return 0;
}
